#include "Fraction.h"

Fraction Fraction::operator+(const Fraction& obj) {
    Fraction res;
    res.n = (n * obj.d) + (obj.n * d);
    res.d = d * obj.d;
    return res;
}

Fraction::Fraction(double num, double den) {
    n = num;
    d = den;
}

Fraction::Fraction() {
    n = 0;
    d = 1;
}

Fraction::~Fraction() {
    cout << "hi";
}