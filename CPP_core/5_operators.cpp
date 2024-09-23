#include <iostream>
using namespace std;

int main() {
    // Arithmatic 
    cout << "Arithmatic operator : " << "\n";
    int a = 101 , b = 20 ;
    cout << "sum = " << (a+b) << "\n";
    cout << "diff = " << (a-b) << "\n";
    cout << "Product = " << (a*b) << "\n";
    cout << "Division = " << (a/b) << "\n";
    cout << "Remainder / modulo = " << (a % b) << "\n";

    cout << "\n";

    // Relational
    cout << "Relational operator : " << "\n";
    cout << "a > b = " << (a > b) << "\n";      
    cout << "a < b = " << (a < b) << "\n";
    cout << "a <= b = " << (a == b) << "\n";
    cout << "a >= b = " << (a == b) << "\n";
    cout << "a == b = " << (a == b) << "\n";
    cout << "a != b = " << (a != b) << "\n";

    cout << "\n";

    // Logical
    cout << "Logical operator : " << "\n";
    bool x = true, y = false;
    cout << "x AND y = " << (x && y) << "\n";   // Logical AND
    cout << "x OR y = " << (x || y) << "\n";    // Logical OR
    cout << "NOT x = " << (!x) << "\n";         // Logical NOT
    cout << "NOT y = " << (!y) << "\n";         // Logical NOT

    return 0;

}


