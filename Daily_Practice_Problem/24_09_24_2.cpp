// check given number is prime or not

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    bool isprime = true;

    for(int i=2; i<= (n-1); i++){
        if(n%i == 0){
            isprime = false;
            break;
        }
    }

    if (isprime == true){
        cout << "Prime Number \n" ;
    }
    else{
        cout << "Not a Prime Number \n" ;
    }

}