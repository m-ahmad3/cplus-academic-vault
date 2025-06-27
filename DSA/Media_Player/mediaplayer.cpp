#include<iostream>
#include<fstream>
#include "mediaplayer.h"
using namespace std;


Song::Song(const char* t, const char* a, const char* tp)
{
    int len = 0;
    for (int i = 0; t[i] != '\0'; i++)
    {
        len++;
    }
    len++;
    title = new char[len];
    for (int i = 0; i < len; i++)
    {
        title[i] = t[i];
    }

    int len1 = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        len1++;
    }
    len1++;

    author = new char[len1];
    for (int i = 0; i < len1; i++)
    {
        author[i] = a[i];
    }

    int len2 = 0;

    for (int i = 0; tp[i] != '\0'; i++)
    {
        len2++;
    }
    len2++;

    type = new char[len2];

    for (int i = 0; i < len2; i++)
    {
        type[i] = tp[i];
    }
}

Song::~Song()
{
    delete[] title;
    delete[] author;
    delete[] type;
}

// Node class implementation
Node::Node(const char* t, const char* a, const char* tp) : songObj(t, a, tp), nextNode(nullptr), prevNode(nullptr)
{
}

Node::~Node()
{
}

// Playlist class implementation
Playlist::Playlist() : firstNode(nullptr), currentNode(nullptr), playlistSize(0)
{
}

Playlist::~Playlist()
{
    Node* currNode = firstNode;
    while (currNode != nullptr)
    {
        Node* temp = currNode;
        currNode = currNode->nextNode;
        delete temp;
    }
}

void Playlist::insertNode(const char* t, const char* a, const char* tp)
{
    Node* newNode = new Node(t, a, tp);
    if (firstNode == nullptr)
    {
        firstNode = newNode;
        currentNode = firstNode;
    }
    else
    {
        Node* currNode = firstNode;
        while (currNode->nextNode != nullptr)
        {
            currNode = currNode->nextNode;
        }
        currNode->nextNode = newNode;
        newNode->prevNode = currNode;
    }
    playlistSize++;
}

void Playlist::displayPlaylist()
{
    Node* currNode = firstNode;
    int lenOfPlaylist = 1;
    cout << endl << CYAN << "SONG TITLE\t\tAUTHOR\t\tTYPE" << RESET << endl << endl;
    while (currNode != nullptr)
    {
        cout << lenOfPlaylist << "." << WHITE << currNode->songObj.title << "\t\t" << currNode->songObj.author
            << "\t\t" << currNode->songObj.type << RESET << endl;
        currNode = currNode->nextNode;
        lenOfPlaylist++;
    }
}

void Playlist::createPlaylist()
{
    ifstream songFile("songs.txt");

    if (!songFile.is_open()) {
        cout << RED << "ERROR: Songs file not found!" << RESET << endl;
        return;
    }

    cout << "Available Songs:" << endl;
    int songCount = 0;
    char title[50], author[30], type[20];

    while (songFile >> title >> author >> type)
    {
        cout << ++songCount << ". " << title << "\t" << author << "\t" << type << endl;
    }

    songFile.close();

    int playlistSize;
    cout << "Enter the number of songs you want to add to the playlist: ";
    cin >> playlistSize;

    for (int i = 0; i < playlistSize; i++)
    {
        int songNumber;
        cout << "Enter the song number to add to the playlist: ";
        cin >> songNumber;

        songFile.open("songs.txt");

        for (int j = 0; j < songNumber; j++)
        {
            songFile >> title >> author >> type;
        }
        songFile.close();

        insertNode(title, author, type);
    }

    cout << GREEN << "Playlist created successfully!" << RESET << endl;
}

void Playlist::addToPlaylist()
{
    char title[50], author[30], type[20];
    cout << "Enter song title: ";
    cin >> title;
    cout << "Enter song author: ";
    cin >> author;
    cout << "Enter song type: ";
    cin >> type;

    insertNode(title, author, type);
    cout << GREEN << "Song added to the playlist!" << RESET << endl;
}

void Playlist::showUserPlaylist()
{
    if (playlistSize == 0)
    {
        cout << RED << "No playlist available. Please create a playlist first!" << RESET << endl;
    }
    else
    {
        displayPlaylist();
    }
}

void Playlist::playNext()
{
    if (currentNode != nullptr && currentNode->nextNode != nullptr)
    {
        currentNode = currentNode->nextNode;
        displayCurrentSong();
    }
    else
    {
        cout << RED << "No new song in the playlist!" << RESET << endl;
    }
}

void Playlist::playPrevious()
{
    if (currentNode != nullptr && currentNode->prevNode != nullptr) {
        currentNode = currentNode->prevNode;
        displayCurrentSong();
    }
    else
    {
        cout << RED << "There is no previous song available!" << RESET << endl;
    }
}

void Playlist::playRandomSong()
{
    if (playlistSize == 0)
    {
        cout << RED << "No songs available in the playlist!" << RESET << endl;
        return;
    }
    int random = rand() % playlistSize;
    Node* currNode = firstNode;

    for (int i = 0; i < random; i++)
    {
        currNode = currNode->nextNode;
    }
    currentNode = currNode;
    displayCurrentSong();
}

void Playlist::displayCurrentSong()
{
    if (currentNode != nullptr)
    {
        cout << CYAN << "Now Playing:" << RESET << endl;
        cout << WHITE << "Title: " << currentNode->songObj.title << "\tAuthor: " << currentNode->songObj.author
            << "\tType: " << currentNode->songObj.type << RESET << endl;
    }
    else
    {
        cout << RED << "No song currently playing!" << RESET << endl;
    }
}

