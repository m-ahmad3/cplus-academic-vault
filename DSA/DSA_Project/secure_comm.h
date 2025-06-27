#pragma once
#include<iostream>
using namespace std;
class SecureCommunicationNode {
private:
    int nodeID;
    char* data;

public:
    SecureCommunicationNode(int id) : nodeID(id), data(nullptr) {}

    void sendData(const char* message, int destinationID) {
        char* encryptedMessage = encrypt(message);
        SecureCommunicationNode* destinationNode = findNode(destinationID);
        if (destinationNode) {
            destinationNode->receiveData(encryptedMessage, nodeID);
        }
        delete[] encryptedMessage;
    }

    void receiveData(const char* encryptedMessage, int sourceID) {
        char* decryptedMessage = decrypt(encryptedMessage);

        processDecryptedData(decryptedMessage, sourceID);

        delete[] decryptedMessage;
    }

    void displayNodeInfo() const {
        cout << "NODE ID: " << nodeID << endl;
    }


    char* encrypt(const char* data) {
        int length = getlength(data);
        char* encryptedData = new char[length + 1];
        copyArray(encryptedData, data);
        return encryptedData;
    }

    char* decrypt(const char* encryptedData) {
        int length = getlength(encryptedData);
        char* decryptedData = new char[length + 1];
        copyArray(decryptedData, encryptedData);
        return decryptedData;
    }
    void processDecryptedData(const char* decryptedData, int sourceID) {
        cout << "NODE: " << nodeID << " RECEVIED FROM ID  " << sourceID << ": " << decryptedData << endl;

        if (compareARRAY(decryptedData, "EMERGENCY-SIGNAL")) {
            cout << "EMERGENCY SIGNAL RECEIVED! INITIATING EMERGENCY PROCEDURES." << std::endl;
        }
        else if (compareARRAY(decryptedData, "MAINTIANCE-REQUEST")) {
            cout << "MAINTENANCE REQUEST RECEIVED. SCHEDULING MAINTENANCE." << endl;
        }
        else {
            cout << "UNRECOGNIZED DATA RECEIVED. IGNORING." << endl;
        }
    }
    bool compareARRAY(const char* ARR, const char* ARR2) {
        while (*ARR && (*ARR == *ARR2)) {
            ARR++;
            ARR2++;
        }
        return (*ARR == '\0' && *ARR2 == '\0');
    }
    int getlength(const char* Arr) {
        int len = 0;
        while (Arr[len] != '\0') {
            len++;
        }
        return len;
    }

    void copyArray(char* dest, const char* source) {
        int i = 0;
        while (source[i] != '\0') {
            dest[i] = source[i];
            i++;
        }
        dest[i] = '\0';
    }

    SecureCommunicationNode* findNode(int id) {
        if (id == nodeID) {
            return this;
        }
        return nullptr;
    }

    ~SecureCommunicationNode() {

    }

};