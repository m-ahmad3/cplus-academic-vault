#pragma once
#include<iostream>
using namespace std;

class node {
public:
    int roadID;
    bool roadClosed;
    node* next;
    node(int id, bool closed) : roadID(id), roadClosed(closed), next(nullptr) {}
};

class DynamicTrafficRouting {
private:
    node* first;

public:
    DynamicTrafficRouting() : first(nullptr) {}

    void addRoadClosure(int roadID) {
        node* newNode = new node(roadID, true);
        newNode->next = first;
        first = newNode;
    }

    void updateRoadConditions(int roadID, bool closed) {
        node* current = first;
        while (current != nullptr) {
            if (current->roadID == roadID) {
                current->roadClosed = closed;
                return;
            }
            current = current->next;
        }
        addRoadClosure(roadID);
    }

    void reroute(int closedRoadID) {
        const int maxAlternativeRoutes = 3;
        int alternativeRoutes[maxAlternativeRoutes] = { 0 };
        node* current = first;
        cout << "MAX ALTERNATIVE ROUTES ARE::" << maxAlternativeRoutes << endl;
        while (current != nullptr) {
            if (current->roadID == closedRoadID) {
                current->roadClosed = false;
                getAlternativeRoutes(current, alternativeRoutes, maxAlternativeRoutes);
                break;
            }
            current = current->next;
        }
        for (int i = 0; i < maxAlternativeRoutes; i++) {
            if (alternativeRoutes[i] != 0) {
                updateRoadConditions(alternativeRoutes[i], false);
            }
        }
        displayRoadConditions();
    }

    void displayRoadConditions() {
        cout << "CURRENT ROAD CONDITIONS:" << endl;
        node* current = first;
        while (current != nullptr) {
            cout << "ROAD " << current->roadID << ": ";
            if (current->roadClosed) {
                cout << "ClOSED!!" << endl;
            }
            else {
                cout << "OPEN!!" << endl;
            }
            current = current->next;
        }
    }
    void getAlternativeRoutes(node* closedRoad, int alternativeRoutes[], int maxSize) {
        for (int i = 0; i < maxSize; i++) {
            alternativeRoutes[i] = closedRoad->roadID + i;
        }
    }

};
