#include "Handouts.h"

Handouts::Handouts(const char* name, const char* courseName, int courseCode, int quantity, int price, const char* author, int pages) : StockItem(name, courseName, courseCode, quantity, price) {
    if (author != nullptr) {
        int size = 0;
        for (int a = 0; author[a] != '\0'; a++) {
            size++;
        }

        this->Author = new char[size + 1];
        for (int a = 0; a < size; a++) {
            this->Author[a] = author[a];
        }
        this->Author[size] = '\0';
    }
    else {
        this->Author = nullptr;
    }
    PagesNo = pages;
}

Handouts::Handouts(const Handouts& obj) : StockItem(obj) {
    if (obj.Author != nullptr) {
        int size = 0;
        for (int a = 0; obj.Author[a] != '\0'; a++) {
            size++;
        }

        this->Author = new char[size + 1];
        for (int a = 0; a < size; a++) {
            this->Author[a] = obj.Author[a];
        }
        this->Author[size] = '\0';
    }
    else {
        this->Author = nullptr;
    }
    PagesNo = obj.PagesNo;
}

void Handouts::Display() const {
    cout << "\nHandout Information: " << endl;
    StockItem::Display();
    if (Author != nullptr) {
        cout << "Name of Author: " << Author << endl;
    }
    cout << "Number of Pages: " << PagesNo << endl;
}

Handouts::~Handouts() {
    if (Author != nullptr) {
        delete[] Author;
    }
}