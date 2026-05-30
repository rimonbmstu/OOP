#ifndef DRAFT_H
#define DRAFT_H
#include "Figure2D.h"
#include <vector>

class Draft {
private:
    std::vector<Figure2D*> figures;

public:
    Draft();
    ~Draft(); // Deletes all pointers

    size_t size() const;
    void add(Figure2D* fig);
    void print() const;

    // Overloads for array-style access
    Figure2D* operator[](size_t index);
    const Figure2D* operator[](size_t index) const;
};

#endif // DRAFT_H