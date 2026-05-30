#include "Draft.h"
#include <iostream>

Draft::Draft() {}

Draft::~Draft() {
    // Free the dynamically allocated memory
    for (Figure2D* fig : figures) {
        delete fig;
    }
    figures.clear();
}

size_t Draft::size() const {
    return figures.size();
}

void Draft::add(Figure2D* fig) {
    figures.push_back(fig);
}

void Draft::print() const {
    std::cout << "\n=== Draft Contents (" << size() << " figures) ===\n";
    for (size_t i = 0; i < figures.size(); ++i) {
        std::cout << "[" << i << "] ";
        figures[i]->print();
        std::cout << "    Area: " << figures[i]->area() << "\n";
        std::cout << "    Perimeter: " << figures[i]->perimeter() << "\n";
        std::cout << "--------------------------------------\n";
    }
}

Figure2D* Draft::operator[](size_t index) {
    return figures[index];
}

const Figure2D* Draft::operator[](size_t index) const {
    return figures[index];
}