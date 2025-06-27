#include "Bowler.h"

// Constructor for Bowler
Bowler::Bowler(const char* name, int matches, int wickets) : Player(name, matches) {
    No_of_wickets = wickets;
}

// Copy constructor for Bowler
Bowler::Bowler(const Bowler& obj) : Player(obj) {
    this->No_of_wickets = obj.No_of_wickets;
}

// Function to display Bowler information
void Bowler::Display() {
    Player::Display();
    cout << "Player Type: Bowler" << endl;
    cout << "No. of Wickets: " << No_of_wickets << endl << endl;
}