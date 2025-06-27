#include "StockItem.h"

// Destructor
StockItem::~StockItem() {
    if (Name != nullptr) {
        delete[] Name;
    }
    if (CourseName != nullptr) {
        delete[] CourseName;
    }
}

// Constructors
StockItem::StockItem(const char* name, const char* courseName, int courseCode, int quantity, int price) {
    if (name != nullptr) {
        int size = 0;
        for (int a = 0; name[a] != '\0'; a++) {
            size++;
        }

        this->Name = new char[size + 1];
        for (int a = 0; a < size; a++) {
            this->Name[a] = name[a];
        }
        this->Name[size] = '\0';
    }
    else {
        this->Name = nullptr;
    }

    if (courseName != nullptr) {
        int size = 0;
        for (int a = 0; courseName[a] != '\0'; a++) {
            size++;
        }

        this->CourseName = new char[size + 1];
        for (int a = 0; a < size; a++) {
            this->CourseName[a] = courseName[a];
        }
        this->CourseName[size] = '\0';
    }
    else {
        this->CourseName = nullptr;
    }

    this->CourseCode = courseCode;
    this->Quantity = quantity;
    this->Price = price;
}

StockItem::StockItem(const StockItem& obj) {
    if (obj.Name != nullptr) {
        int size = 0;
        for (int a = 0; obj.Name[a] != '\0'; a++) {
            size++;
        }

        this->Name = new char[size + 1];
        for (int a = 0; a < size; a++) {
            this->Name[a] = obj.Name[a];
        }
        this->Name[size] = '\0';
    }
    else {
        this->Name = nullptr;
    }

    if (obj.CourseName != nullptr) {
        int size = 0;
        for (int a = 0; obj.CourseName[a] != '\0'; a++) {
            size++;
        }

        this->CourseName = new char[size + 1];
        for (int a = 0; a < size; a++) {
            this->CourseName[a] = obj.CourseName[a];
        }
        this->CourseName[size] = '\0';
    }
    else {
        CourseName = nullptr;
    }

    CourseCode = obj.CourseCode;
    Quantity = obj.Quantity;
    Price = obj.Price;
}

// Setters
void StockItem::setName(const char* name) {
    if (name != nullptr) {
        int size = 0;
        for (int a = 0; name[a] != '\0'; a++) {
            size++;
        }
        if (this->Name != nullptr) {
            delete[] this->Name;
        }
        this->Name = new char[size + 1];
        for (int a = 0; a < size; a++) {
            this->Name[a] = name[a];
        }
        this->Name[size] = '\0';
    }
    else {
        this->Name = nullptr;
    }
}

void StockItem::setCourseName(const char* courseName) {
    if (courseName != nullptr) {
        int size = 0;
        for (int a = 0; courseName[a] != '\0'; a++) {
            size++;
        }
        if (CourseName != nullptr) {
            delete[] CourseName;
        }
        this->CourseName = new char[size + 1];
        for (int a = 0; a < size; a++) {
            this->CourseName[a] = courseName[a];
        }
        this->CourseName[size] = '\0';
    }
    else {
        this->CourseName = nullptr;
    }
}

void StockItem::setCourseCode(int courseCode) {
    this->CourseCode = courseCode;
}

void StockItem::setQuantity(int quantity) {
    this->Quantity = quantity;
}

void StockItem::setPrice(int price) {
    this->Price = price;
}

// Getters
char* StockItem::getName() const {
    if (this->Name != nullptr) {
        int size = 0;
        for (int a = 0; this->Name[a] != '\0'; a++) {
            size++;
        }

        char* name = new char[size + 1];
        for (int a = 0; a < size; a++) {
            name[a] = this->Name[a];
        }
        name[size] = '\0';

        return name;
    }

    return nullptr;
}

char* StockItem::getCourseName() const {
    if (this->CourseName != nullptr) {
        int size = 0;
        for (int a = 0; this->CourseName[a] != '\0'; a++) {
            size++;
        }

        char* courseName = new char[size + 1];
        for (int a = 0; a < size; a++) {
            courseName[a] = this->CourseName[a];
        }
        courseName[size] = '\0';

        return courseName;
    }

    return nullptr;
}

int StockItem::getCourseCode() const {
    return this->CourseCode;
}

int StockItem::getQuantity() const {
    return this->Quantity;
}

int StockItem::getPrice() const {
    return this->Price;
}

void StockItem::Display() const {
    cout << "Item Information: " << endl;
    if (this->Name != nullptr) {
        cout << "Name of Item: " << Name << endl;
    }
    if (this->CourseName != nullptr) {
        cout << "Name of Course: " << CourseName << endl;
    }
    cout << "Course Code: " << CourseCode << endl;
    cout << "Quantity of Item: " << Quantity << endl;
    cout << "Price of Item: " << Price << endl;
}
