#pragma once
#include<iostream>
using namespace std;

class TrafficSignal {
private:
    int signalID;
    int greenTime;
    int redTime;
    double trafficDensity;
    bool PeakHour;
    int vehicleType;

public:
    TrafficSignal()
        : signalID(0), greenTime(0), redTime(0), trafficDensity(0.0), PeakHour(false), vehicleType(0) {}

    TrafficSignal(int id, int green, int red, double density, bool peakHour, int vechile)
        : signalID(id), greenTime(green), redTime(red), trafficDensity(density), PeakHour(peakHour), vehicleType(vechile) {}

    void OptimizeSignalTiming() {
        if (PeakHour) {
            greenTime = greenTime + greenTime / 5;
        }
        else {
            greenTime = greenTime + greenTime * trafficDensity / 100;
        }

        if (greenTime < 10) {
            greenTime = 10;
        }
        else if (greenTime > 60) {
            greenTime = 60;
        }

        if (vehicleType != 0 && redTime > 0) {

            cout << "SIGNAL " << signalID << " ALLOW ";

            if (vehicleType == 1) {
                cout << "[*].AMBULANCE";

            }
            else if (vehicleType == 2) {
                cout << "[*].FIRE-FIGHTER";
            }
            else if (vehicleType == 3) {
                cout << "[*].POLICE/ARMY";
            }
            else {
                cout << "RANDOM VECHILES!!";
            }


        }
        else {
            cout << "SIGNAL " << signalID << " TIMING OPTIMIZED\nGREEN LIGHT SET TO " << greenTime << " SEC" << endl;
            cout << "----------------------------------------------------------------------" << endl;
        }
    }

    double trafficdensity() {
        return trafficDensity;
    }
    int vechiletype() {
        return vehicleType;
    }
    int signal() {
        return signalID;
    }
    void UpdateTrafficDensity(double density) {
        trafficDensity = density;
        cout << "DENSITY UPDATED FOR SIGNAL " << signalID << " : " << trafficDensity << "%" << endl;
    }

    void UpdatePeakHour(bool peakHour) {
        PeakHour = peakHour;
        cout << "PEAK HOUR UPDATED FOR: " << signalID << ": ";
        if (peakHour) {
            cout << "PEAK HOUR!!" << endl;
        }
        else {
            cout << "NON-PEAK HOUR!!" << endl;
        }
    }

    void SetVehicleType(int type) {
        vehicleType = type;
        cout << "VECHILCE TYPE SET FOR " << signalID << ": ";
        if (vehicleType == 1) {
            cout << "[*].AMBULANCE";
            cout << " TO PASS....." << endl;
        }
        else if (vehicleType == 2) {
            cout << "[*].FIRE-FIGHTER";
            cout << " TO PASS....." << endl;
        }
        else if (vehicleType == 3) {
            cout << "[*].POLICE/ARMY";
            cout << " TO PASS....." << endl;
        }
        else {
            cout << "RANDOM VECHILES!!";
            if (trafficdensity() > 50) {
                cout << endl << "DENSITY OVERFLOW...." << "STOP!! " << endl;
            }
        }
        cout << endl;
    }
};
