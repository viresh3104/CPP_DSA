// factorial of n

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    double factorial = 1;

    for (int i = 1; i<=n; i++){
        factorial = factorial * i;
    }
    cout<<"Factorial of "<<n<<" is "<<factorial << "\n";
}