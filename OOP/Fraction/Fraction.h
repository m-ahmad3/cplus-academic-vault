#include <iostream>
using namespace std;

class Fraction {
    double n;
    double d;
public:
    Fraction operator +(const Fraction&);
    Fraction(double, double);
    Fraction();
    ~Fraction();
};