// number is positive negative or zero
#include <iostream>
using namespace  std;

int main(){
    float num;
    cout << "Enter the number: ";
    cin >> num;

    if(num >0){
        cout << "The number is positive" << "\n";
    }
    else if(num<0){
        cout << "The number is Negative" << "\n";
    }
    else{
        cout << "The number entered is zero" << "\n";
    }
}
