#include "Fraction.h"
#include <iostream>

int main() {
    std::cout << "--- Fraction Class Complete Demonstration ---\n\n";

    Fraction f1(2, 4);   
    Fraction f2(3, -9);  
    Fraction f3(5);      
    Fraction f4;         

    std::cout << "1. Constructors & Simplification:\n";
    std::cout << "f1(2, 4)   -> " << f1 << "\n";
    std::cout << "f2(3, -9)  -> " << f2 << "\n";
    std::cout << "f3(5)      -> " << f3 << "\n";
    std::cout << "f4()       -> " << f4 << "\n\n";

    std::cout << "2. Arithmetic (Fraction & Fraction):\n";
    std::cout << f1 << " + (" << f2 << ") = " << (f1 + f2) << "\n";
    std::cout << f1 << " - (" << f2 << ") = " << (f1 - f2) << "\n";
    std::cout << f1 << " * (" << f2 << ") = " << (f1 * f2) << "\n";
    std::cout << f1 << " / (" << f2 << ") = " << (f1 / f2) << "\n\n";

    std::cout << "3. Arithmetic (Fraction & Integer):\n";
    std::cout << f1 << " + 2 = " << (f1 + 2) << "\n";
    std::cout << f1 << " - 2 = " << (f1 - 2) << "\n";
    std::cout << f1 << " * 3 = " << (f1 * 3) << "\n";
    std::cout << f1 << " / 3 = " << (f1 / 3) << "\n\n";

    std::cout << "4. Arithmetic (Integer & Fraction):\n";
    std::cout << "2 + (" << f2 << ") = " << (2 + f2) << "\n";
    std::cout << "2 - (" << f2 << ") = " << (2 - f2) << "\n";
    std::cout << "3 * (" << f1 << ") = " << (3 * f1) << "\n";
    std::cout << "3 / " << f1 << " = " << (3 / f1) << "\n\n";

    std::cout << "5. Assignment Operators (Fraction & Fraction):\n";
    Fraction f5 = f1; f5 += f2; std::cout << "1/2 += -1/3 -> " << f5 << "\n";
    f5 = f1; f5 -= f2; std::cout << "1/2 -= -1/3 -> " << f5 << "\n";
    f5 = f1; f5 *= f2; std::cout << "1/2 *= -1/3 -> " << f5 << "\n";
    f5 = f1; f5 /= f2; std::cout << "1/2 /= -1/3 -> " << f5 << "\n\n";

    std::cout << "6. Assignment Operators (Fraction & Integer):\n";
    f5 = f1; f5 += 3; std::cout << "1/2 += 3 -> " << f5 << "\n";
    f5 = f1; f5 -= 3; std::cout << "1/2 -= 3 -> " << f5 << "\n";
    f5 = f1; f5 *= 3; std::cout << "1/2 *= 3 -> " << f5 << "\n";
    f5 = f1; f5 /= 3; std::cout << "1/2 /= 3 -> " << f5 << "\n\n";

    std::cout << "7. Comparisons:\n";
    std::cout << std::boolalpha; 
    std::cout << f1 << " == 1/2 -> " << (f1 == Fraction(1, 2)) << "\n";
    std::cout << f1 << " != " << f2 << " -> " << (f1 != f2) << "\n";
    std::cout << f1 << " < " << f2 << "  -> " << (f1 < f2) << "\n";
    std::cout << f1 << " > " << f2 << "  -> " << (f1 > f2) << "\n";
    std::cout << f1 << " <= 1   -> " << (f1 <= 1) << "\n";
    std::cout << f1 << " >= 0   -> " << (f1 >= 0) << "\n";
    std::cout << "0 < " << f1 << "    -> " << (0 < f1) << "\n";
    
    return 0;
}