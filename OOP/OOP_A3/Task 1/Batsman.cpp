#include "Batsman.h"

// Constructor for Batsman
Batsman::Batsman(const char* name, int matches, const int* PerMatchScore) : Player(name, matches) {
    this->Total_score = 0;
    this->Per_match_score = new int[matches];
    for (int a = 0; a < matches; a++) {
        this->Per_match_score[a] = PerMatchScore[a];
        this->Total_score += PerMatchScore[a];
    }
    this->Average = Calculate_Avg();
}

// Copy constructor for Batsman
Batsman::Batsman(const Batsman& obj) : Player(obj) {
    this->Total_score = obj.Total_score;

    if (obj.Per_match_score != nullptr) {
        this->Per_match_score = new int[obj.Matches];
        for (int a = 0; a < obj.Matches; a++) {
            this->Per_match_score[a] = obj.Per_match_score[a];
        }
    }
    else {
        this->Per_match_score = nullptr;
    }

    this->Average = obj.Average;
}

// Function to calculate the average score
float Batsman::Calculate_Avg() {
    Average = (float)Total_score / Player::Matches;
    return Average;
}

// Function to display Batsman information
void Batsman::Display() {
    Player::Display();
    cout << "Player Type: Batsman" << endl;
    if (Per_match_score != nullptr) {
        cout << "Per Match Score: ";
        for (int a = 0; a < Player::Matches; a++) {
            cout << Per_match_score[a] << " ";
        }
        cout << endl;
    }
    cout << "Total Score: " << Total_score << endl;
    cout << "Average: " << Average << endl << endl;
}

// Destructor for Batsman
Batsman::~Batsman() {
    if (Per_match_score != nullptr) {
        delete[] Per_match_score;
        Per_match_score = nullptr;
    }
}