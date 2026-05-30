#include "Rect.h"
#include <iostream>

Rect::Rect(double a, double b, const Point& center) : Figure2D(center) {
    // Calculate vertices based on the center and side lengths
    vertices[0] = Point(center.getX() - a / 2.0, center.getY() - b / 2.0); // Bottom-left
    vertices[1] = Point(center.getX() + a / 2.0, center.getY() - b / 2.0); // Bottom-right
    vertices[2] = Point(center.getX() + a / 2.0, center.getY() + b / 2.0); // Top-right
    vertices[3] = Point(center.getX() - a / 2.0, center.getY() + b / 2.0); // Top-left
}

void Rect::print() const {
    std::cout << "Rect basePoint " << basePoint << " vertices: "
              << vertices[0] << ", " << vertices[1] << ", "
              << vertices[2] << ", " << vertices[3] << "\n";
}

void Rect::move(const Point& dest) {
    // Calculate how much the base point is shifting
    double dx = dest.getX() - basePoint.getX();
    double dy = dest.getY() - basePoint.getY();

    // Move the base point
    Figure2D::move(dest);

    // Shift all vertices by the same amount
    for (int i = 0; i < 4; ++i) {
        vertices[i].setX(vertices[i].getX() + dx);
        vertices[i].setY(vertices[i].getY() + dy);
    }
}

double Rect::area() const {
    // Calculated based on vertex coordinates as requested
    double width = distance(vertices[0], vertices[1]);
    double height = distance(vertices[1], vertices[2]);
    return width * height;
}

double Rect::perimeter() const {
    // Calculated based on vertex coordinates as requested
    double width = distance(vertices[0], vertices[1]);
    double height = distance(vertices[1], vertices[2]);
    return 2.0 * (width + height);
}