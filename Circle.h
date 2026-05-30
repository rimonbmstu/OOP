#ifndef CIRCLE_H
#define CIRCLE_H
#include "Figure2D.h"

class Circle : public Figure2D {
private:
    double radius;

public:
    Circle(double r, const Point& center);

    void print() const override;
    double area() const override;
    double perimeter() const override;
};

#endif // CIRCLE_H