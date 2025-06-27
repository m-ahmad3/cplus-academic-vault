#include <iostream>
using namespace std;

class Shape {
protected:
    float* length;
    float* width;

public:
    Shape(float l = 1, float w = 1) {
        length = new float;
        *length = l;

        width = new float;
        *width = w;
    }

    Shape(const Shape& obj) {
        if (length != nullptr) {
            delete length;
        }
        length = new float;
        *length = *obj.length;

        if (width != nullptr) {
            delete width;
        }
        width = new float;
        *width = *obj.width;
    }

    virtual float area() { return 0; }
    virtual void display() {}
    virtual ~Shape() {
        delete length;
        delete width;
    }
};

class Triangle :public Shape {

public:
    Triangle(float length = 1, float width = 1) :Shape(length, width) {}

    Triangle(const Triangle& obj) :Shape(obj) {}

    float area() override {
        return 0.5 * *length * *width;
    }

    void display() override {
        cout << "Details of Triangle: " << endl;
        cout << "Length: " << *length << endl;
        cout << "Width: " << *width << endl;
        cout << "Area: " << area() << endl;
    }
};

class Square :public Shape {
public:
    Square(float length = 1) :Shape(length) {}

    Square(const Square& obj) :Shape(obj) {}

    float area() override {
        return *length * *length;
    }

    void display() override {
        cout << "Details of Square: " << endl;
        cout << "Length: " << *length << endl;
        cout << "Area: " << area() << endl;
    }
};

class Rectangle :public Shape {
public:
    Rectangle(float length = 1, float width = 1) :Shape(length, width) {}

    Rectangle(const Rectangle& obj) :Shape(obj) {}

    float area() override {
        return *length * *width;
    }

    void display() override {
        cout << "Details of Rectangle: " << endl;
        cout << "Length: " << *length << endl;
        cout << "Width: " << *width << endl;
        cout << "Area: " << area() << endl;
    }

};

class Circle :public Shape {
    float* radius;

public:
    Circle(float r) {
        radius = new float;
        *radius = r;
    }

    Circle(const Circle& obj) {
        radius = new float;
        *radius = *obj.radius;
    }

    float area() override {
        return (22.0 / 7) * *radius * *radius;
    }

    void display() override {
        cout << "Details of Circle: " << endl;
        cout << "Radius: " << *radius << endl;
        cout << "Area: " << area() << endl;
    }

    ~Circle() {
        delete radius;
    }
};

int main()
{
    Shape* shapes[4];
    shapes[0] = new Triangle(2.3, 2.5);
    shapes[1] = new Square(2.2);
    shapes[2] = new Rectangle(2.8, 2.8);
    shapes[3] = new Circle(2.9);

    for (int i = 0; i < 4; i++) {
        shapes[i]->display();
        cout << endl;
        delete shapes[i];
    }

    return 0;
}
