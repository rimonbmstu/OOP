#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>

class Fraction {
private:
    // Separate integer fields for numerator and denominator [cite: 3]
    int numerator;
    int denominator;

    // Private method for fraction simplification [cite: 5]
    void simplify();
    
    // Helper method to find the Greatest Common Divisor (GCD)
    int gcd(int a, int b) const;

public:
    // Constructor with default parameters to handle both default and parameterized creation [cite: 8]
    Fraction(int num = 0, int den = 1);

    // Arithmetic operations between two fractions [cite: 10]
    Fraction operator+(const Fraction& other) const;
    Fraction operator-(const Fraction& other) const;
    Fraction operator*(const Fraction& other) const;
    Fraction operator/(const Fraction& other) const;

    // Arithmetic operations between a fraction and an integer [cite: 11]
    Fraction operator+(int value) const;
    Fraction operator-(int value) const; 
    Fraction operator*(int value) const;
    Fraction operator/(int value) const;

    // Arithmetic operations between an integer and a fraction (friend functions) [cite: 12]
    friend Fraction operator+(int value, const Fraction& frac);
    friend Fraction operator-(int value, const Fraction& frac);
    friend Fraction operator*(int value, const Fraction& frac);
    friend Fraction operator/(int value, const Fraction& frac);

    // Assignment operations between two fractions [cite: 14]
    Fraction& operator+=(const Fraction& other);
    Fraction& operator-=(const Fraction& other);
    Fraction& operator*=(const Fraction& other);
    Fraction& operator/=(const Fraction& other);

    // Assignment operations between a fraction and an integer [cite: 15, 18]
    Fraction& operator+=(int value);
    Fraction& operator-=(int value);
    Fraction& operator*=(int value);
    Fraction& operator/=(int value);

    // Comparison operators for two fractions [cite: 16]
    bool operator<(const Fraction& other) const;
    bool operator>(const Fraction& other) const;
    bool operator<=(const Fraction& other) const;
    bool operator>=(const Fraction& other) const;
    bool operator==(const Fraction& other) const;
    bool operator!=(const Fraction& other) const;

    // Comparison operators for a fraction and an integer [cite: 21]
    bool operator<(int value) const;
    bool operator>(int value) const;
    bool operator<=(int value) const;
    bool operator>=(int value) const;
    bool operator==(int value) const;
    bool operator!=(int value) const;

    // Comparison operators for an integer and a fraction (friend functions) [cite: 23]
    friend bool operator<(int value, const Fraction& frac);
    friend bool operator>(int value, const Fraction& frac);
    friend bool operator<=(int value, const Fraction& frac);
    friend bool operator>=(int value, const Fraction& frac);
    friend bool operator==(int value, const Fraction& frac);
    friend bool operator!=(int value, const Fraction& frac);

    // Friend overload of the << operator for terminal output [cite: 25]
    friend std::ostream& operator<<(std::ostream& os, const Fraction& frac);
};

#endif // FRACTION_H