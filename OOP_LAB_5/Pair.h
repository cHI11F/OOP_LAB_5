#ifndef PAIR_H
#define PAIR_H

#include <iostream>
using namespace std;

class Pair {
private:
    int first;   
    int second;  
    static int counter; 

public:
    Pair(int f = 0, int s = 0);  
    void setFirst(int f);         
    void setSecond(int s);        
    int getFirst() const;         
    int getSecond() const;        

    bool operator>(const Pair& other) const;  

    static int getCounter();  
};

#endif 
