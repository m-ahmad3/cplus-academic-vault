#pragma once
#include<iostream>
#include"queue.h"
#include"traffic_signal.h"
using namespace std;
class EmergencyPrioritySystem {
private:
    queue<TrafficSignal> emergencyQueue;

public:
    void requestEmergency(TrafficSignal signal) {
        emergencyQueue.enqueue(signal);
        cout << " SIGNAL RECEIVE FROM : " << signal.signal() << "." << endl;
        prioritizeTrafficSignals();
        cout << endl;
    }

    void prioritizeTrafficSignals() {
        if (!emergencyQueue.isempty()) {
            TrafficSignal signal = emergencyQueue.dequeue();
            cout << "PRIORITY GIVEN TO SIGNAL " << signal.signal() << ". ADJUSTING TRAFFIC SIGNALS!!" << endl;
            if (signal.vechiletype() == 1) {

                cout << "VEHICLE TYPE::AMBULANCE.....(EMERGENCY[!])\nCLEARING THE MAIN ROAD...." << endl;
                signal.UpdateTrafficDensity(10.0);
                signal.OptimizeSignalTiming();
                cout << endl << "----------------------------------------------------------------------" << endl;
            }
            else if (signal.vechiletype() == 2) {
                cout << "VEHICLE TYPE::FIRE-TRUCK.....(EMERGENCY[!])\nGIVING EXTENDED GREEN TIME TO AFFECTED AREA!!" << endl;
                signal.UpdateTrafficDensity(50.0);
                signal.OptimizeSignalTiming();
                cout << endl << "----------------------------------------------------------------------" << endl;
            }
            else if (signal.vechiletype() == 3) {
                cout << "VEHICLE TYPE::ARMY/POLICE!!....\nIMPLEMENTING SECURTIY MEASURE....." << endl;
                signal.UpdateTrafficDensity(30.0);
                signal.OptimizeSignalTiming();
                cout << endl << "----------------------------------------------------------------------" << endl;
            }
            else {

                cout << "NORMAL VECHILES !!\nRESETING TO DEAFULT ...." << endl;
                signal.OptimizeSignalTiming();

            }
        }
        else {
            cout << "NO PENDING EMERGENCY REQUEST LEFT!!" << endl;
        }
    }

};