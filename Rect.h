#ifndef RECT_H
#define RECT_H
#include "Figure2D.h"

class Rect : public Figure2D {
private:
    Point vertices[4];

public:
    // a is width (parallel to x), b is height (parallel to y)
    Rect(double a, double b, const Point& center);

    void print() const override;
    void move(const Point& dest) override;
    double area() const override;
    double perimeter() const override;
};

#endif // RECT_H