#pragma once
#include "StockItem.h"

class Handouts : public StockItem {
    char* Author;
    int PagesNo;
public:
    Handouts(const char* = nullptr, const char* = nullptr, int = 0, int = 0, int = 0, const char* = nullptr, int = 0);
    Handouts(const Handouts&);
    void Display() const override;
    ~Handouts();
};