#include "LectureDVD.h"

LectureDVD::LectureDVD(const char* name, const char* courseName, int courseCode, int quantity, int price, int minutes, int lectures) : StockItem(name, courseName, courseCode, quantity, price) {
    this->TotalMinutes = minutes;
    this->TotalLectures = lectures;
}

LectureDVD::LectureDVD(const LectureDVD& obj) : StockItem(obj) {
    this->TotalMinutes = obj.TotalMinutes;
    this->TotalLectures = obj.TotalLectures;
}

void LectureDVD::Display() const {
    cout << "\nInformation of LectureDVD: " << endl;
    StockItem::Display();
    cout << "Total Minutes: " << TotalMinutes << endl;
    cout << "Total Lectures: " << TotalLectures << endl;
}