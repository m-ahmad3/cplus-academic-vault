#include "Player.h"

// Constructor for Player
Player::Player(const char* name, int matches) {
    if (name != nullptr) {
        int size = 0;
        for (int a = 0; name[a] != '\0'; a++) {
            size++;
        }
        this->Name = new char[size + 1];
        for (int a = 0; a < size; a++) {
            this->Name[a] = name[a];
        }
        this->Name[size] = '\0';
    }
    else {
        this->Name = nullptr;
    }
    this->Matches = matches;
}

// Copy constructor for Player
Player::Player(const Player& obj) {
    if (obj.Name != nullptr) {
        int size = 0;
        for (int a = 0; obj.Name[a] != '\0'; a++) {
            size++;
        }
        this->Name = new char[size + 1];
        for (int a = 0; a < size; a++) {
            this->Name[a] = obj.Name[a];
        }
        this->Name[size] = '\0';
    }
    else {
        this->Name = nullptr;
    }
    this->Matches = obj.Matches;
}

// Function to display Player information
void Player::Display() {
    cout << "Player Information:" << endl;
    if (this->Name != nullptr) {
        cout << "Name: " << this->Name << endl;
    }
    cout << "Matches Played: " << this->Matches << endl;
}

// Destructor for Player
Player::~Player() {
    if (this->Name != nullptr) {
        delete[] this->Name;
        this->Name = nullptr;
    }
}