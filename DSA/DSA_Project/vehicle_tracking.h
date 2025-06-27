#pragma once
#include<iostream>
using namespace std;


class newVehicle {
public:
    int vehicleID;
    char model[50];
    char color[50];
    int year;

    newVehicle() {
        vehicleID = 0;
        model[50] = '\0';
        color[50] = '\0';
        year = 0;
    }


    newVehicle(int id, const char* mdl, const char* clr, int yr) : vehicleID(id), year(yr) {
        int i = 0;
        while (mdl[i] != '\0' && i < 49) {
            model[i] = mdl[i];
            i++;
        }
        model[i] = '\0';
        i = 0;
        while (clr[i] != '\0' && i < 49) {
            color[i] = clr[i];
            ++i;
        }
        color[i] = '\0';
    }
    int getlength(const char* arr) {
        int len = 0;
        while (arr[len] != '\0') {
            ++len;
        }
        return len;
    }
    void copyArray(char* dest, const char* source, int len) {
        for (int i = 0; i < len && source[i] != '\0'; ++i) {
            dest[i] = source[i];
        }
        dest[len] = '\0';
    }


    bool comapre(const char* str1, const char* str2) {
        int i = 0;
        while (str1[i] != '\0' && str2[i] != '\0') {
            if (str1[i] != str2[i]) {
                return false;
            }
            ++i;
        }
        return str1[i] == '\0' && str2[i] == '\0';
    }

    void intToString(char* arr, int value) {
        int i = 0;
        while (value != 0) {
            arr[i++] = '0' + value % 10;
            value /= 10;
        }
        if (i == 0) {
            arr[i++] = '0';
        }
        arr[i] = '\0';
        int start = 0;
        int end = i - 1;
        while (start < end) {
            char temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            ++start;
            --end;
        }
    }

    int getVehicleID() const {
        return vehicleID;
    }
};

class VehicleTracker {
private:
    newVehicle vehicles[100];
    int capacity;
    int size;
public:
    VehicleTracker() : capacity(100), size(0) {}
    int getlength(const char* str) {
        int len = 0;
        while (str[len] != '\0') {
            ++len;
        }
        return len;
    }
    void copyArray(char* dest, const char* source, int len) {
        for (int i = 0; i < len && source[i] != '\0'; ++i) {
            dest[i] = source[i];
        }
        dest[len] = '\0';
    }
    bool compare(const char* str1, const char* str2) {
        int i = 0;
        while (str1[i] != '\0' && str2[i] != '\0') {
            if (str1[i] != str2[i]) {
                return false;
            }
            ++i;
        }
        return str1[i] == '\0' && str2[i] == '\0';
    }
    void intToString(char* str, int value) {
        int i = 0;
        while (value != 0) {
            str[i++] = '0' + value % 10;
            value /= 10;
        }
        if (i == 0) {
            str[i++] = '0';
        }
        str[i] = '\0';

        int start = 0;
        int end = i - 1;
        while (start < end) {
            char temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            ++start;
            --end;
        }
    }


    void addVehicle(int vehicleID, const char* model, const char* color, int year) {

        newVehicle newVehicles(vehicleID, model, color, year);
        vehicles[size++] = newVehicles;
        cout << "Vehicle " << vehicleID << " added." << std::endl;
    }


    void removeVehicle(int vehicleID) {
        int index = -1;
        for (int i = 0; i < size; i++) {
            if (vehicles[i].getVehicleID() == vehicleID) {
                index = i;
                break;
            }
        }
        if (index != -1) {
            for (int i = index; i < size - 1; i++) {
                vehicles[i] = vehicles[i + 1];
            }

            size--;
            cout << "VEHCILE " << vehicleID << " REMOVED!!" << endl;
        }
        else {
            cout << "VEHICLE " << vehicleID << " NOT FOUND[!]" << endl;
        }
    }

    void updateVehicleInfo(int vehicleID, const char* model, const char* color, int year) {

        int index = -1;
        for (int i = 0; i < size; i++) {
            if (vehicles[i].getVehicleID() == vehicleID) {
                index = i;
                break;
            }
        }
        if (index != -1) {
            copyArray(vehicles[index].model, model, getlength(model));
            copyArray(vehicles[index].color, color, getlength(color));
            vehicles[index].year = year;

            cout << "VEHICLE " << vehicleID << " INFORMATION UPDATED" << endl;
        }
        else {
            cout << "VEHICLE " << vehicleID << " NOT FOUND[!]" << endl;
        }
    }

    void displayDetailedVehicleInfo(int vehicleID) {
        int index = -1;
        for (int i = 0; i < size; i++) {
            if (vehicles[i].getVehicleID() == vehicleID) {
                index = i;
                break;
            }
        }
        if (index != -1) {
            cout << "DETAILED INFO OF VEHICLE " << vehicleID << ":" << endl;
            cout << "[MODEL] " << vehicles[index].model << endl;
            cout << "[COLOR] " << vehicles[index].color << endl;
            cout << "[YEAR] " << vehicles[index].year << endl;
        }
        else {
            cout << "VEHICLE " << vehicleID << " NOT FOUND[!]" << endl;
        }
    }


    void displayVehicleList() {
        cout << "CURRENT VECHICLE LIST::" << endl;
        for (int i = 0; i < size; i++) {
            cout << "VECHILE " << vehicles[i].getVehicleID() << endl;
        }
    }

    int getTotalVehicleCount() const {
        return size;
    }
};