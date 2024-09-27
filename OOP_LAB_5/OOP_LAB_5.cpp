#include <iostream>
#include "Pair.h"
#include "Fraction.h"

using namespace std;

int main() {
    int first1, second1, first2, second2;

    
    cout << "Введіть перший елемент для p1: ";
    cin >> first1;
    cout << "Введіть другий елемент для p1: ";
    cin >> second1;
    Pair p1(first1, second1);  

    
    cout << "Введіть перший елемент для p2: ";
    cin >> first2;
    cout << "Введіть другий елемент для p2: ";
    cin >> second2;
    Pair p2(first2, second2);  

    cout << "Кількість об'єктів Pair: " << Pair::getCounter() << endl;

    if (p1 > p2) {
        cout << "Пара p1 більше, ніж пара p2." << endl;
    }
    else {
        cout << "Пара p1 не більше, ніж пара p2." << endl;
    }

    
    p1.setFirst(2);
    p1.setSecond(3);
    cout << "Нова пара p1: " << p1.getFirst() << "." << p1.getSecond() << endl;

    cout << "Кількість об'єктів Pair: " << Pair::getCounter() << endl;

    
    int whole1, decimal1;
    cout << "Введіть цілу та дробову частини для Fraction 1: ";
    cin >> whole1 >> decimal1;
    Fraction f1(whole1, decimal1);

    
    int whole2, decimal2;
    cout << "Введіть цілу та дробову частини для Fraction 2: ";
    cin >> whole2 >> decimal2;
    Fraction f2(whole2, decimal2);

    
    if (f1 > f2) {
        cout << "Fraction 1 більше ніж Fraction 2." << endl;
    }
    else {
        cout << "Fraction 1 не більше ніж Fraction 2." << endl;
    }

    return 0;
}

