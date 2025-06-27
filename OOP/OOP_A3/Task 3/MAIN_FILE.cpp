#include <iostream>
#include "Triangle.h"
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"
#include "Hexagon.h"
#include "Pentagon.h"
#include "Cube.h"
#include "Sphere.h"
#include "Cylinder.h"
#include "Tetrahedron.h"
#include "Cone.h"
#include "Torus.h"

using namespace std;

int main()
{
    cout << "Two Dimensional Shape: " << endl;
    Triangle triangle(2.1, 3.1);
    triangle.Display();

    Rectangle rectangle(2.1, 3.1);
    rectangle.Display();

    Square square(2.1);
    square.Display();

    Circle circle(2.1);
    circle.Display();

    Hexagon hexagon(2.1);
    hexagon.Display();

    Pentagon pentagon(2.1);
    pentagon.Display();

    cout << "Three Dimensional Shape: " << endl;

    Cube cube(2.1);
    cube.Display();

    Sphere sphere(2.1);
    sphere.Display();

    Cylinder cylinder(2.1, 3.1);
    cylinder.Display();

    Tetrahedron tetrahedron(2.1);
    tetrahedron.Display();

    Cone cone(2.1, 3.1);
    cone.Display();

    Torus torus(2.1);
    torus.Display();

    return 0;
}
