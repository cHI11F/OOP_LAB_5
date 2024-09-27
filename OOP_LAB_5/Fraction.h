#ifndef FRACTION_H
#define FRACTION_H

#include "Pair.h"

class Fraction {
private:
    Pair number; 

public:
    Fraction(int whole, int decimal); 
    bool operator>(const Fraction& other) const; 
};

#endif 
