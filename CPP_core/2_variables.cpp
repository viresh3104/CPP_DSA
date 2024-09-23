// containers to store the data
// we have to declare the datatype of the data which we are going to store in the variable such as 

// int     e.g. 25, 43, 45                      (4 byte)
// float   e.g. 25.5f, 43.5f, 45.5f             (4 type)
// char    e.g. 'a', 'b', 'c'                   (1 byte)
// bool    e.g. true, false                     (1 byte)
// double  e.g. 25.5, 43.5, 45.5                (8 byte)
// these datatypes known as primitive datatypes i.e. most basic one



// 1 byte = 8 bits
// 1 bit = 0 or 1



#include <iostream>
using namespace std;

int main() {
    int age = 20;
    float salary = 23.34f;                                            // if we don't write f here then it is considered as double
    char grade = 'A';
    bool isMarried = true;

    cout << isMarried << "\n";
    cout << grade << "\n";
    return 0;
}


// we can also use string, array, list, map, set etc. which are known as
// non primitive datatypes or reference datatypes