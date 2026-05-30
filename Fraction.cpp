#include "Fraction.h"
#include <cmath>
#include <stdexcept>

// Helper to find GCD
int Fraction::gcd(int a, int b) const {
    a = std::abs(a);
    b = std::abs(b);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Private simplification method [cite: 5]
void Fraction::simplify() {
    if (denominator == 0) {
        throw std::invalid_argument("Denominator cannot be zero.");
    }
    // Extract sign from the denominator [cite: 4]
    if (denominator < 0) {
        numerator = -numerator;
        denominator = -denominator;
    }
    // Divide by the greatest common divisor [cite: 5]
    int divisor = gcd(numerator, denominator);
    numerator /= divisor;
    denominator /= divisor;
}

// Constructor [cite: 8]
Fraction::Fraction(int num, int den) : numerator(num), denominator(den) {
    simplify();
}

// ---- Arithmetic operations: Fraction and Fraction ---- [cite: 10]
Fraction Fraction::operator+(const Fraction& other) const {
    return Fraction(numerator * other.denominator + other.numerator * denominator, 
                    denominator * other.denominator);
}
Fraction Fraction::operator-(const Fraction& other) const {
    return Fraction(numerator * other.denominator - other.numerator * denominator, 
                    denominator * other.denominator);
}
Fraction Fraction::operator*(const Fraction& other) const {
    return Fraction(numerator * other.numerator, denominator * other.denominator);
}
Fraction Fraction::operator/(const Fraction& other) const {
    return Fraction(numerator * other.denominator, denominator * other.numerator);
}

// ---- Arithmetic operations: Fraction and Integer ---- [cite: 11]
Fraction Fraction::operator+(int value) const { return *this + Fraction(value); }
Fraction Fraction::operator-(int value) const { return *this - Fraction(value); }
Fraction Fraction::operator*(int value) const { return *this * Fraction(value); }
Fraction Fraction::operator/(int value) const { return *this / Fraction(value); }

// ---- Arithmetic operations: Integer and Fraction ---- [cite: 12]
Fraction operator+(int value, const Fraction& frac) { return Fraction(value) + frac; }
Fraction operator-(int value, const Fraction& frac) { return Fraction(value) - frac; }
Fraction operator*(int value, const Fraction& frac) { return Fraction(value) * frac; }
Fraction operator/(int value, const Fraction& frac) { return Fraction(value) / frac; }

// ---- Assignment operations: Fraction and Fraction ---- [cite: 14]
Fraction& Fraction::operator+=(const Fraction& other) { *this = *this + other; return *this; }
Fraction& Fraction::operator-=(const Fraction& other) { *this = *this - other; return *this; }
Fraction& Fraction::operator*=(const Fraction& other) { *this = *this * other; return *this; }
Fraction& Fraction::operator/=(const Fraction& other) { *this = *this / other; return *this; }

// ---- Assignment operations: Fraction and Integer ---- [cite: 15, 18]
Fraction& Fraction::operator+=(int value) { *this = *this + Fraction(value); return *this; }
Fraction& Fraction::operator-=(int value) { *this = *this - Fraction(value); return *this; }
Fraction& Fraction::operator*=(int value) { *this = *this * Fraction(value); return *this; }
Fraction& Fraction::operator/=(int value) { *this = *this / Fraction(value); return *this; }

// ---- Comparison operators: Fraction and Fraction ---- [cite: 16]
bool Fraction::operator<(const Fraction& other) const {
    return numerator * other.denominator < other.numerator * denominator;
}
bool Fraction::operator>(const Fraction& other) const { return other < *this; }
bool Fraction::operator<=(const Fraction& other) const { return !(*this > other); }
bool Fraction::operator>=(const Fraction& other) const { return !(*this < other); }
bool Fraction::operator==(const Fraction& other) const {
    return numerator == other.numerator && denominator == other.denominator;
}
bool Fraction::operator!=(const Fraction& other) const { return !(*this == other); }

// ---- Comparison operators: Fraction and Integer ---- [cite: 21]
bool Fraction::operator<(int value) const { return *this < Fraction(value); }
bool Fraction::operator>(int value) const { return *this > Fraction(value); }
bool Fraction::operator<=(int value) const { return *this <= Fraction(value); }
bool Fraction::operator>=(int value) const { return *this >= Fraction(value); }
bool Fraction::operator==(int value) const { return *this == Fraction(value); }
bool Fraction::operator!=(int value) const { return *this != Fraction(value); }

// ---- Comparison operators: Integer and Fraction ---- [cite: 23]
bool operator<(int value, const Fraction& frac) { return Fraction(value) < frac; }
bool operator>(int value, const Fraction& frac) { return Fraction(value) > frac; }
bool operator<=(int value, const Fraction& frac) { return Fraction(value) <= frac; }
bool operator>=(int value, const Fraction& frac) { return Fraction(value) >= frac; }
bool operator==(int value, const Fraction& frac) { return Fraction(value) == frac; }
bool operator!=(int value, const Fraction& frac) { return Fraction(value) != frac; }

// ---- Output operator ---- [cite: 25]
std::ostream& operator<<(std::ostream& os, const Fraction& frac) {
    os << frac.numerator;
    if (frac.denominator != 1 && frac.numerator != 0) {
        os << "/" << frac.denominator;
    }
    return os;
}