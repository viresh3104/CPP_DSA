#include <iostream>
using namespace std;

int main(){
    int a = 4;        // in binary 0100
    int b = 8;        // in binary 1000

    cout << "And: " << (a & b)<< "\n" ;                   
    //     0100
    //   & 1000
    //     ----
    //     0000

    cout << "Or: " << (a | b)<< "\n" ;
    //     0100
    //   | 1000
    //     ----
    //     1100         i.e 12 in decimal

    cout << "Xor: " << (a ^ b)<< "\n" ;
    //     0100
    //   ^ 1000
    //     ----
    //     1100          i.e same hua toh 0 (0-0 and 1-1 = 0 and 0-1 and 1-0 = 1)


    cout << "Not a: " << (~a)<< "\n" ;
    //  ~ 0100
    //     ----
    //     1011



    cout << "Not b: " << (~b)<< "\n" ;
    //  ~ 1000
    //    ----
    //    0111


    cout << "bitwise Left Shift: " << (a << 1) << "\n";
    // here we have a = 4 it means 100 in binary, what left shift do is it shift the 100 to the left by given digit here its 1 so 
    // we will get 1000 i.e 8 of decimal
    // lets take one more e.g 
    // 10 << 2
    // 10 in binary is 1010 and we have to shift 2 bits to the left so
    // 101000 i.e 40 of decimal 

    cout << "Bitwise right Shift: " << (10 >> 1) << "\n";
    // here we have 10 it means 1010 in binary, what right shift do is
    // it shift the 1010 to the right by given digit here its 1 so
    // we will get 101 i.e 5 of decimal
    // lets take one more e.g
    // 1010 >> 2
    // 1010 in binary is 1010 and we have to shift 2 bits to
    // the right so
    // 10 i.e 10 of decimal


    // note: 
    // 1. left shift is same as multiplication by 2 to the power bit we want to move
    // e.g 8 >> 1 i.e 8*2^1 = 16 
    // 2. right shift is same as division by 2 to the power bit we want to move
    // e.g 8 >> 1 i.e 8/2^1 = 4

}