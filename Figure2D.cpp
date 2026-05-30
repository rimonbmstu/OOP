#include "Figure2D.h"

Figure2D::Figure2D(const Point& p) : basePoint(p) {}

Figure2D::~Figure2D() {}

void Figure2D::move(const Point& dest) {
    basePoint = dest;
}