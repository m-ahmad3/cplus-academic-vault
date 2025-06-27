#pragma once
#include<iostream>
using namespace std;


class ParkingSpaceNode {
public:
    int spaceID;
    bool isOccupied;
    ParkingSpaceNode* next;
    ParkingSpaceNode(int id) : spaceID(id), isOccupied(false), next(nullptr) {}
    void updateAvailability(bool occupied) {
        isOccupied = occupied;
    }
    ParkingSpaceNode* getNext() const {
        return next;
    }
    void setNext(ParkingSpaceNode* nextNode) {
        next = nextNode;
    }
    void displayStatus() const {
        std::cout << "PARKING SPACE:: " << spaceID << ": ";
        if (isOccupied) {
            cout << "OCCUPIED!!" << endl;
        }
        else {
            cout << "NOT OCCUPIED..... EMPTY!!" << endl;
        }
    }
};


class ParkingSpaceList {
private:
    ParkingSpaceNode* first;

public:
    ParkingSpaceList() : first(nullptr) {}

    ~ParkingSpaceList() {
    }

    void addParkingSpace(int spaceID) {
        ParkingSpaceNode* newNode = new ParkingSpaceNode(spaceID);
        newNode->setNext(first);
        first = newNode;
    }

    void updateParkingStatus(int spaceID, bool occupied) {
        ParkingSpaceNode* current = first;
        while (current) {
            if (current->spaceID == spaceID) {
                current->updateAvailability(occupied);
                break;
            }
            current = current->getNext();
        }
    }

    void displayParkingStatus() {
        ParkingSpaceNode* current = first;
        while (current) {
            current->displayStatus();
            current = current->getNext();
        }
    }
};