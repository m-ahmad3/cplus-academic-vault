#include <iostream>
#include"queue.h"
#include"traffic_signal.h"
#include"emergency.h"
#include"traffice_routing.h"
#include"tollbooth.h"
#include"sensor.h"
#include"traffic_analyticsh.h"
#include"vehicle_tracking.h"
#include"parking.h"
#include"secure_comm.h"
using namespace std;
int main() {
  
    TrafficSignal signal1(1, 30, 25, 50.0,1, false);
    EmergencyPrioritySystem emergencySystem;
    DynamicTrafficRouting trafficSystem;
    TollBoothManager tollBooth;
    DistributedSensorNetwork sensorNetwork;
    TrafficAnalytics trafficAnalytics;
    ParkingSpaceList parkingSpaces;
    SecureCommunicationNode node1(1);
    SecureCommunicationNode node2(2);
    VehicleTracker VT;
        int option;
        cout << "\n=============================== SMART CITY TRAFFIC MANAGEMENT SYSTEM ================================\n";
        do {
            
            cout << endl;
            cout << "[!]                             [!]MENU OPTION[!]                     [!]" << endl;
            cout << "[1]. REQUEST EMERGENCY\n";
            cout << "[2]. UPDATE ROAD CONDITIONS\n";
            cout << "[3]. PROCESS TOLL BOOTHS\n";
            cout << "[4]. SENSOR DATA\n";
            cout << "[5]. ANALYZE TRAFFIC PATTERNS\n";
            cout << "[6]. MANAGE PARKING SPACES\n";
            cout << "[7]. SECURE COMMUNICATION\n";
            cout << "[8]. MANAGE VEHICLES\n";
            cout << "[0]. EXIT\n";
            cout << "ENTER YOUR CHOICE: ";
            cin >> option;
            system("cls");
            if (option == 1) {
                signal1.SetVehicleType(1);
                emergencySystem.requestEmergency(signal1);
                signal1.SetVehicleType(2);
                emergencySystem.requestEmergency(signal1);
                signal1.SetVehicleType(3);
                emergencySystem.requestEmergency(signal1);
                signal1.SetVehicleType(0);
                emergencySystem.requestEmergency(signal1);
               
            }
            else if (option == 2) {
            
                int road_id[10];
                int size = 3;
                int a;
                cout << "ENTER ROAD ID!!"<<endl;
                for (int i = 0; i < size; i++) {
                    cout << "ROAD ID " << i<<":";
                    cin >> road_id[i];
                    trafficSystem.addRoadClosure(road_id[i]);
                }

                cout << "CHOOSE ROAD WHICH USER WANT TO OPEN::";
                cin >> a;
                bool flag;
                for (int i = 0; i < size; i++) {
                    if (road_id[i]==a) {
                        cout << "ENTER 0/1 FOR OPEN OR CLOSE::";
                        cin>> flag;
                        trafficSystem.updateRoadConditions(a, flag);
                        trafficSystem.displayRoadConditions();

                    } 
                }
                
             

            }
            else if (option == 3) {
                tollBooth.enqueueRegularLane(Vehicle(1));
                tollBooth.enqueueExpressLane(Vehicle(2));
                tollBooth.enqueueElectronicLane(Vehicle(3));
                tollBooth.processRegularLane();
                tollBooth.processExpressLane();
                tollBooth.processElectronicLane();
            }
            else if (option == 4) {
                sensorNetwork.addSensorData(Sensor(1, 75.0));
                sensorNetwork.addSensorData(Sensor(2, 60.0));
                sensorNetwork.addSensorData(Sensor(3, 80.0));
                sensorNetwork.displayAllSensorData();
                double averageTrafficData = sensorNetwork.getAverageTrafficData();
                cout << "AVERAGE TRAFFICE DATA:: " << averageTrafficData << "%" << endl;
            }
            else if (option == 5) {
                trafficAnalytics.analyzeTrafficPatterns();
                trafficAnalytics.provideLongTermInsights();
                trafficAnalytics.provideUrbanPlanningRecommendations();

            }
            else if (option == 6) {
                parkingSpaces.addParkingSpace(1);
                parkingSpaces.addParkingSpace(2);
                parkingSpaces.addParkingSpace(3);
                parkingSpaces.updateParkingStatus(1, true);
                parkingSpaces.updateParkingStatus(3, true);
                cout << "[*].PARKING STATUS::" << endl;
                parkingSpaces.displayParkingStatus();
                cout << "\n";
            }
            else if (option == 7) {
            
                node1.sendData("EMERGENCY-SIGNAL", 2);
                node2.sendData("MAINTIANCE-REQUEST", 1);
                cout << "DATA INFO::" << endl;
                node1.displayNodeInfo();
                node2.displayNodeInfo();
                node1.processDecryptedData("EMERGENCY-SIGNAL",2);
            }
            else if (option == 8) {
                for (int i = 1; i <= 5; ++i) {
                    char model[50], color[50];
                    int modelValue = i * 100;
                    int colorValue = i * 10;
                    int year = 2022 - i;
                    sprintf_s(model, "Model%d", modelValue);
                    sprintf_s(color, "Color%d", colorValue);
                    VT.addVehicle(i, model, color, year);
                }
                VT.updateVehicleInfo(5, "BMW M7", "PALE-BLUE", 2024);
                VT.displayDetailedVehicleInfo(5);
                VT.displayDetailedVehicleInfo(3);
                VT.removeVehicle(7);
                VT.displayVehicleList();

                cout << "TOTAL VEHICELS: " << VT.getTotalVehicleCount() << endl;
            }
            else if (option == 0) {
                
                cout << "EXITING THE PROGRAM.\n";
             

            }
            else {
                cout << "INVALID CHOICE. PLEASE TRY AGAIN.\n";
            }
         
        } while (option != 0);

    return 0;
}

