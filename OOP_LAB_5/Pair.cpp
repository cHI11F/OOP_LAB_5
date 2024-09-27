#include "Pair.h"


int Pair::counter = 0;


Pair::Pair(int f, int s) : first(f), second(s) {
    counter++;  
}


void Pair::setFirst(int f) {
    first = f;
}


void Pair::setSecond(int s) {
    second = s;
}


int Pair::getFirst() const {
    return first;
}


int Pair::getSecond() const {
    return second;
}


bool Pair::operator>(const Pair& other) const {
    return (first > other.first) || (first == other.first && second > other.second);
}


int Pair::getCounter() {
    return counter;
}
