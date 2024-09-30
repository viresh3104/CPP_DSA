// check wheaher the given number is power of 2 is or not 

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the Number: ";
    cin >> n;
    bool power =true;
    int original_n = n;

    

    if(n <= 0){
        cout << n << " is not a power of 2";
    }
    else{
        while(n >1){
        if (n % 2 != 0){
            power = false;
            break;
        }
        n = n /2;
        }
    }




    if(power == true){
        cout << original_n << " is a power of 2";
    }
    else{
        cout << original_n << " is not a power of 2";
    }
}