// checking you can drive or not

#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if(age >= 18){
        cout << "You can drive." << "\n";
    }
    else{
        cout << "You can't drive." << "\n";
    }
}