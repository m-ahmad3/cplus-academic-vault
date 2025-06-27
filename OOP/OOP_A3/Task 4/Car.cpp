#include "Car.h"

// Constructors
Car::Car(const char* make, const char* model, int year, double price) {
    // Allocate memory for make
    if (make != nullptr) {
        int size = 0;
        for (int a = 0; make[a] != '\0'; a++) {
            size++;
        }
        this->Make = new char[size + 1];
        for (int a = 0; a < size; a++) {
            this->Make[a] = make[a];
        }
        this->Make[size] = '\0';
    }
    else {
        this->Make = nullptr;
    }

    // Allocate memory for model
    if (model != nullptr) {
        int size = 0;
        for (int a = 0; model[a] != '\0'; a++) {
            size++;
        }
        this->Model = new char[size + 1];
        for (int a = 0; a < size; a++) {
            this->Model[a] = model[a];
        }
        this->Model[size] = '\0';
    }
    else {
        this->Model = nullptr;
    }

    // Set year and price
    this->Year = year;
    this->Price = price;
}

// Copy constructor
Car::Car(const Car& obj) {
    // Copy make
    if (obj.Make != nullptr) {
        int size = 0;
        for (int a = 0; obj.Make[a] != '\0'; a++) {
            size++;
        }
        this->Make = new char[size + 1];
        for (int a = 0; a < size; a++) {
            this->Make[a] = obj.Make[a];
        }
        this->Make[size] = '\0';
    }
    else {
        this->Make = nullptr;
    }

    // Copy model
    if (obj.Model != nullptr) {
        int size = 0;
        for (int a = 0; obj.Model[a] != '\0'; a++) {
            size++;
        }
        this->Model = new char[size + 1];
        for (int a = 0; a < size; a++) {
            this->Model[a] = obj.Model[a];
        }
        this->Model[size] = '\0';
    }
    else {
        this->Model = nullptr;
    }

    // Copy year and price
    this->Year = obj.Year;
    this->Price = obj.Price;
}

// Destructor
Car::~Car() {
    // Free memory for make
    if (Make != nullptr) {
        delete[] Make;
        Make = nullptr;
    }

    // Free memory for model
    if (Model != nullptr) {
        delete[] Model;
        Model = nullptr;
    }
}

// Getter and setter methods
char* Car::getMake() const {
    // Return a copy of make
    if (Make != nullptr) {
        int size = 0;
        for (int a = 0; Make[a] != '\0'; a++) {
            size++;
        }
        char* make = new char[size + 1];
        for (int a = 0; a < size; a++) {
            make[a] = Make[a];
        }
        make[size] = '\0';

        return make;
    }

    return nullptr;
}

void Car::setMake(char* make) {
    // Set make
    if (make != nullptr) {
        int size = 0;
        for (int a = 0; make[a] != '\0'; a++) {
            size++;
        }
        this->Make = new char[size + 1];
        for (int a = 0; a < size; a++) {
            this->Make[a] = make[a];
        }
        this->Make[size] = '\0';
    }
    else {
        this->Make = nullptr;
    }
}

char* Car::getModel() const {
    // Return a copy of model
    if (Model != nullptr) {
        int size = 0;
        for (int a = 0; Model[a] != '\0'; a++) {
            size++;
        }
        char* model = new char[size + 1];
        for (int a = 0; a < size; a++) {
            model[a] = Model[a];
        }
        model[size] = '\0';

        return model;
    }

    return nullptr;
}

void Car::setModel(char* model) {
    // Set model
    if (model != nullptr) {
        int size = 0;
        for (int a = 0; model[a] != '\0'; a++) {
            size++;
        }
        this->Model = new char[size + 1];
        for (int a = 0; a < size; a++) {
            this->Model[a] = model[a];
        }
        this->Model[size] = '\0';
    }
    else {
        this->Model = nullptr;
    }
}

int Car::getYear() const {
    return Year;
}

void Car::setYear(int year) {
    this->Year = year;
}

double Car::getPrice() const {
    return Price;
}

void Car::setPrice(double price) {
    this->Price = price;
}

void Car::Display() const {
    cout << "Car Information:" << endl;
    if (Make != nullptr) {
        cout << "Make: " << Make << endl;
    }
    if (Model != nullptr) {
        cout << "Model: " << Model << endl;
    }
    cout << "Year: " << Year << endl;
    cout << "Price: " << Price << endl;
}
