// in math we use decimal number system which have 0-9 i.e. 10 digits and 10 means dec, so this system is called as decimal
// in binary we use 0-1 i.e. 2 digits and 2 means bi 
// in octal we use 0-7 i.e. 8 digits and 8 means
// in hexadecimal we use 0-9 and A-F i.e. 16 digits and


#include <iostream>
using namespace std;


// decimal to binary

// int decBinary(int num){
//     int ans = 0 , power = 1;

//     while(num > 0){
//         int rem = num % 2;
//         num /= 2;

//         ans += (rem * power);
//         power *= 10;
//     }
//     return ans;
// }

// int main(){
//     int num;
//     cout << "Enter a decimal number: ";
//     cin >> num;
//     cout << "Binary of " << num << " is " << decBinary(num) << "\n";
//     return 0;
// }




// binary to decimal

int binaryDecimal(int num){
    int ans = 0 , power = 1;
    while(num > 0){
        int rem = num % 10;
        num /= 10;
        ans += (rem * power);
        power *= 2;
    }
    return ans;
}


int main(){
    int num;
    cout << "Enter a binary number: ";
    cin >> num;
    cout << "Decimal of " << num << " is " << binaryDecimal(num) << "\n";
}