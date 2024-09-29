// calculate the binomial coefficient of nCr

// formula for BC is :
// n! / r!*(n-r)!

// e.g 8C2 then : 8! / 2!*(8-2)!

#include <iostream>
using namespace std;


int factorial(int n){
    int factorial = 1;
    for(int i = 1; i <= n; i++){
        factorial *= i;
    }
    return factorial;
}

int BC(int n,int r){
    int diff = n-r;
    int coeff = factorial(n) / (factorial(r) * factorial(diff));
    return coeff;
}

int main(){
    int n,r;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter the value of r: ";
    cin>>r;
    cout<<"The binomial coefficient of "<<n<<"C"<<r<<" is: "<<BC(n,r) << "\n";
}