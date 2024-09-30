// reverse the number

#include <iostream>
using namespace std;
int main(){

    int n;
    cout << "Enter the number: ";
    cin >> n;

    int remainder , reversed_num = 0;
    while(n != 0){

        remainder = n % 10;
        reversed_num = (reversed_num*10) + remainder;
        n = n / 10;
    }
    cout << "Reversed number is: " << reversed_num << "\n";
}


// Initial num = 1234
// remainder = 1234 % 10 = 4
// reversedNum = 0 * 10 + 4 = 4
// num = 1234 / 10 = 123

// Next loop:
// remainder = 123 % 10 = 3
// reversedNum = 4 * 10 + 3 = 43
// num = 123 / 10 = 12

// Next loop:
// remainder = 12 % 10 = 2
// reversedNum = 43 * 10 + 2 = 432
// num = 12 / 10 = 1

// Next loop:
// remainder = 1 % 10 = 1
// reversedNum = 432 * 10 + 1 = 4321
// num = 1 / 10 = 0 (loop ends)