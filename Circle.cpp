#include "Circle.h"
#include <iostream>

// Standard fallback for Pi if the compiler doesn't have M_PI
const double PI = 3.14159265358979323846;

Circle::Circle(double r, const Point& center) : Figure2D(center), radius(r) {}

void Circle::print() const {
    std::cout << "Circle basePoint " << basePoint << "\n";
}

double Circle::area() const {
    return PI * radius * radius;
}

double Circle::perimeter() const {
    return 2.0 * PI * radius;
}