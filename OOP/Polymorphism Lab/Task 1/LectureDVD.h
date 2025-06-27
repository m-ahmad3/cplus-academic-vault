#pragma once
#include "StockItem.h"

class LectureDVD : public StockItem {
    int TotalMinutes;
    int TotalLectures;
public:
    LectureDVD(const char* = nullptr, const char* = nullptr, int = 0, int = 0, int = 0, int = 0, int = 0);
    LectureDVD(const LectureDVD&);
    void Display() const override;
};