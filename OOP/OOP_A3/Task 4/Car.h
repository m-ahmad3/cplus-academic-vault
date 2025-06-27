#pragma once
#include <iostream>
using namespace std;

class Car
{
protected:
    char* Make;     // Pointer to hold the make of the car
    char* Model;    // Pointer to hold the model of the car
    int Year;       // Year of the car
    double Price;   // Price of the car

public:
    // Constructors
    Car(const char* = nullptr, const char* = nullptr, int = 0, double = 0);   // Constructor with default arguments
    Car(const Car&);   // Copy constructor

    // Destructor
    ~Car();

    // Getter and setter methods
    char* getMake() const;      // Getter for make
    void setMake(char* = nullptr);  // Setter for make

    char* getModel() const;     // Getter for model
    void setModel(char* = nullptr); // Setter for model

    int getYear() const;        // Getter for year
    void setYear(int = 0);      // Setter for year

    double getPrice() const;    // Getter for price
    void setPrice(double = 0);  // Setter for price

    void Display() const;       // Display method to display car information
};

