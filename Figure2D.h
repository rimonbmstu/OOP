#ifndef FIGURE2D_H
#define FIGURE2D_H
#include "Point.h"

// Abstract base class
class Figure2D {
protected:
    Point basePoint;

public:
    Figure2D(const Point& p);
    virtual ~Figure2D(); // Required for safe deletion of derived objects

    // Pure virtual methods
    virtual void print() const = 0;
    virtual double area() const = 0;
    virtual double perimeter() const = 0;

    // Virtual method
    virtual void move(const Point& dest);
};

#endif // FIGURE2D_H