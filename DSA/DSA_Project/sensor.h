#pragma once
#include<iostream>
using namespace std;

class Sensor {
public:
    int sensorID;
    double trafficData;

    Sensor(int id, double data) : sensorID(id), trafficData(data) {}
};


class Node {
public:
    Sensor data;
    Node* next;

    Node(const Sensor& item) : data(item), next(nullptr) {}
};

class SensorLinkedList {
private:
    Node* first;

public:
    SensorLinkedList() : first(nullptr) {}

    void insert(const Sensor& item) {
        Node* newNode = new Node(item);
        newNode->next = first;
        first = newNode;
    }

    bool isEmpty() const {
        return first == nullptr;
    }

    void displayData() const {
        Node* current = first;
        while (current != nullptr) {
            std::cout << "SENSOR ID: " << current->data.sensorID << "\nTRAFFICE DATA: " << current->data.trafficData << "%" <<endl;
            current = current->next;
        }
    }

    double calculateAverageTrafficData() const {
        double sum = 0.0;
        int count = 0;

        Node* current = first;
        while (current != nullptr) {
            sum += current->data.trafficData;
            count++;
            current = current->next;
        }

        if (count > 0) {
            return sum / count;
        }
        else {
            return 0.0;
        }
    }
};
class DistributedSensorNetwork {
private:
    SensorLinkedList sensorData;
public:

    void addSensorData(const Sensor& sensor) {
        sensorData.insert(sensor);
    }

    void displayAllSensorData() {
        cout << endl << "________________________________________________________" << endl;
        cout << "SENSOR DATA IN DISTRUBTED NETWORK::" << endl;
        sensorData.displayData();
        cout << endl << "________________________________________________________" << endl;

    }
    double getAverageTrafficData() {
        return sensorData.calculateAverageTrafficData();
    }
};
