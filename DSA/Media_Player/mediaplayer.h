#ifndef MEDIAPLAYER_H
#define MEDIAPLAYER_H

#include<iostream>
#include<fstream>
using namespace std;

#define RESET   "\033[0m"
#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define YELLOW  "\033[1;33m"
#define BLUE    "\033[1;34m"
#define MAGENTA "\033[1;35m"
#define CYAN    "\033[1;36m"
#define WHITE   "\033[1;37m"

class Song
{
public:
    char* title;
    char* author;
    char* type;

    Song(const char* t, const char* a, const char* tp);
    ~Song();
};

class Node
{
public:
    Song songObj;
    Node* nextNode;
    Node* prevNode;
    Node(const char* t, const char* a, const char* tp);
    ~Node();
};

class Playlist
{
private:
    Node* firstNode;
    Node* currentNode;
    int playlistSize;

public:
    Playlist();
    ~Playlist();
    void insertNode(const char* t, const char* a, const char* tp);
    void displayPlaylist();
    void createPlaylist();
    void addToPlaylist();
    void showUserPlaylist();
    void playNext();
    void playPrevious();
    void playRandomSong();
    void displayCurrentSong();
};

#endif 

