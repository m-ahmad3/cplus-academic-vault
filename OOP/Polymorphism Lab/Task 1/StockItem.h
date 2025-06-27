#pragma once
#include <iostream>
using namespace std;

class StockItem {
    char* Name;
    int Quantity;
    int Price;
    int CourseCode;
    char* CourseName;
public:
    // Constructors
    StockItem(const char* = nullptr, const char* = nullptr, int = 0, int = 0, int = 0);
    StockItem(const StockItem&);

    // Setters
    void setName(const char*);
    void setCourseName(const char*);
    void setCourseCode(int);
    void setQuantity(int);
    void setPrice(int);

    // Getters
    char* getName() const;
    char* getCourseName() const;
    int getCourseCode() const;
    int getQuantity() const;
    int getPrice() const;

    virtual void Display() const;
    virtual ~StockItem();
};