// checking the char entered is lowecase or upper case

#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character: ";
    cin >> ch;

    if(ch >= 'a' && ch <= 'z'){
        cout<<"The character is a lowercase letter \n";
    }
    else{
        cout<<"The character is an uppercase letter \n";
    }

}