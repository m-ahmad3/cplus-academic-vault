#pragma once
#include "Player.h"

// Class representing a Batsman, inheriting from Player
class Batsman : public Player {
    int Total_score;        // Total score of the batsman
    int* Per_match_score;   // Array for per match scores
    float Average;          // Average score

public:
    // Constructors and destructor
    Batsman(const char* = nullptr, int = 0, const int* = nullptr);
    Batsman(const Batsman&);
    ~Batsman();

    // Member functions
    float Calculate_Avg();
    void Display();
};