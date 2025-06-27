#pragma once
#include<iostream>
#include"queue.h"
using namespace std;

class Vehicle {
private:
    int vehicleID;
public:
    Vehicle() {
        vehicleID = 0;
    }
    Vehicle(int id) : vehicleID(id) {}

    int getVehicleID() const {
        return vehicleID;
    }
};

class TollBoothManager {
private:
    queue<Vehicle> regular_Lane;
    queue<Vehicle> express_Lane;
    queue<Vehicle> electronic_Lane;

public:
    void enqueueRegularLane(const Vehicle& vehicle) {
        regular_Lane.enqueue(vehicle);
        cout << "VEHICLE " << vehicle.getVehicleID() << " ADDED IN REGULAR LANE..." << endl;
    }

    void enqueueExpressLane(const Vehicle& vehicle) {
        express_Lane.enqueue(vehicle);
        cout << "VEHICLE " << vehicle.getVehicleID() << " ADDED IN EXPRESS LANE..." << endl;
    }

    void enqueueElectronicLane(const Vehicle& vehicle) {
        electronic_Lane.enqueue(vehicle);
        cout << "VEHICLE " << vehicle.getVehicleID() << " ADDED IN ELECTROTICS LANE...." << endl;
    }

    void processRegularLane() {
        if (!regular_Lane.isempty()) {
            Vehicle vehicle = regular_Lane.dequeue();
            cout << "PROCESSING VEHICLE " << vehicle.getVehicleID() << " FROM REGULAR LANE..." << endl;
        }
        else {
            cout << "REGULAR LANE IS EMPTY!!." << endl;
        }
    }

    void processExpressLane() {
        if (!express_Lane.isempty()) {
            Vehicle vehicle = express_Lane.dequeue();
            cout << "PROCESSING VEHICLE " << vehicle.getVehicleID() << " FROM EXPRESS LANE..." << endl;
        }
        else {
            cout << "EXPRESS LANE IS EMPTY!!." << endl;
        }
    }

    void processElectronicLane() {
        if (!electronic_Lane.isempty()) {
            Vehicle vehicle = electronic_Lane.dequeue();
            cout << "PROCESSING VEHICLE " << vehicle.getVehicleID() << " WITH ELECTRONIC TOLL COLLECTION!!" << endl;
        }
        else {
            cout << "ELECTRONIC LANE IS EMPTY!!." << endl;
        }
    }
};
