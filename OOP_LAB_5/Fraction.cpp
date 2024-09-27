#include "Fraction.h"


Fraction::Fraction(int whole, int decimal) : number(whole, decimal) {}


bool Fraction::operator>(const Fraction& other) const {
    return number > other.number; 
}
