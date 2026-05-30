#include "Point.h"
#include "Rect.h"
#include "Circle.h"
#include "Draft.h"
#include <iostream>

int main() {
    Draft myDraft;

    // 1. Fill the draft with 2 Rectangles and 2 Circles
    myDraft.add(new Rect(4.0, 2.0, Point(0.0, 0.0)));
    myDraft.add(new Rect(10.0, 5.0, Point(20.0, 20.0)));
    myDraft.add(new Circle(5.0, Point(5.0, 5.0)));
    myDraft.add(new Circle(2.5, Point(-10.0, -10.0)));

    // 2. Print all information about the draft
    myDraft.print();

    // 3. Demonstrate moving a figure using the [] operator
    std::cout << "\n>>> Demonstrating moving Figure 0 <<<\n";
    
    // Access the first figure
    Figure2D* targetFigure = myDraft[0];
    
    std::cout << "State BEFORE move:\n";
    targetFigure->print();

    // Move to a new coordinate
    std::cout << "\nMoving to {15.5, 15.5}...\n\n";
    targetFigure->move(Point(15.5, 15.5));

    std::cout << "State AFTER move:\n";
    targetFigure->print();

    // Note: The assignment asks to demonstrate "rotation" in main, 
    // but the required class fields/methods in the PDF did not include 
    // a rotate() method for Figure2D, Rect, or Circle. Thus, only move() is shown.

    return 0;
}