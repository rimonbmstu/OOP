#ifndef POINT_H
#define POINT_H
#include <iostream>

class Point {
private:
    double x;
    double y;

public:
    // Constructors
    Point(); 
    Point(double x, double y);

    // Getters and Setters
    double getX() const;
    double getY() const;
    void setX(double x);
    void setY(double y);

    // Friend functions
    friend double distance(const Point& p1, const Point& p2);
    friend std::ostream& operator<<(std::ostream& os, const Point& p);
};

#endif // POINT_H