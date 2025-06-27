#pragma once
#include<iostream>
using namespace std;

class TrafficAnalytics {
private:
    double historicalTrafficData[50];
public:
    TrafficAnalytics() {

        for (int i = 0; i < 30; i++) {
            historicalTrafficData[i] = sin(i * 0.02) * 20 + 50;
        }
    }

    void analyzeTrafficPatterns() {
        double sum = 0.0;
        for (int i = 0; i <30; i++) {
            sum += historicalTrafficData[i];
        }
        double averageTraffic = sum / 30;

        cout << "AVERAGE TRAFFIC DETAILS: " << averageTraffic << endl;


        std::cout << "CONJECTION POINTS!! " << endl;
        for (int i = 0; i < 30; i++) {
            if (historicalTrafficData[i] > averageTraffic + 10) {
                cout << i + 1 << " ";
            }
        }
        cout << endl;
    }

    void provideLongTermInsights() {
        double sumX = 0.0, sumY = 0.0, sumXY = 0.0, sumX2 = 0.0;
        for (int i = 0; i < 30; i++) {
            sumX += i + 1;
            sumY += historicalTrafficData[i];
            sumXY += (i + 1) * historicalTrafficData[i];
            sumX2 += pow(i + 1, 2);
        }

        double slope = (30 * sumXY - sumX * sumY) / (30 * sumX2 - pow(sumX, 2));
        double intercept = (sumY - slope * sumX) / 30;

        cout << "LONG TERM TREND:: ";
        if (slope > 0) {
            cout << "INCREASING!!....";
        }
        else if (slope < 0) {
            cout << "DECREASING!!........";
        }
        else {
            cout << "STABLE[!]";
        }
        cout << endl;
    }

    void provideUrbanPlanningRecommendations() {
        cout << "URBAN PLANING RECOMENDADTIONS:: ";
        if (historicalTrafficData[30] > historicalTrafficData[0]) {
            cout << "CONSIDER EXPANDING INFRASTRUCTURE!!" << endl;
        }
        else {
            cout << "FOCUS ON PUBLIC TRANSPOTATION AND ALTERNATIVE ROUTES!!" << endl;
        }
        cout <<endl;
    }
};
