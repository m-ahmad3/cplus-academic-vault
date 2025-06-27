#pragma once
#include "Player.h"

// Class representing a Bowler, inheriting from Player
class Bowler : public Player {
    int No_of_wickets;  // Number of wickets taken by the bowler

public:
    // Constructors
    Bowler(const char*, int, int);
    Bowler(const Bowler&);

    // Member function to display bowler information
    void Display();
};