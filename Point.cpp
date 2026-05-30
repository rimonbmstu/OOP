#include "Point.h"
#include <cmath>

Point::Point() : x(0.0), y(0.0) {}

Point::Point(double x, double y) : x(x), y(y) {}

double Point::getX() const { return x; }
double Point::getY() const { return y; }

void Point::setX(double x) { this->x = x; }
void Point::setY(double y) { this->y = y; }

double distance(const Point& p1, const Point& p2) {
    return std::sqrt(std::pow(p2.x - p1.x, 2) + std::pow(p2.y - p1.y, 2));
}

std::ostream& operator<<(std::ostream& os, const Point& p) {
    os << "{" << p.x << ", " << p.y << "}";
    return os;
}