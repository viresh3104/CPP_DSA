#include <iostream>
using namespace std;

int main(){
    int marks[5] = {10,12,13,14,15};
    int size = sizeof(marks) / sizeof(int);


    // we can print elements in the array by using loops i.e output
    for(int i =0; i<size;i++){
        cout << marks[i] << "\n";
    }




    // we can also take the input to fill in the array

    int price[5];
    int size_p = sizeof(price) / sizeof(int);
    for(int i =0; i<size;i++){
        cout << "Enter the price " << i+1 << " : ";
        cin >> price[i];
        }

    for(int i = 0 ; i<size_p;i++){
        cout << price[i] << "\n";
    }
    
}

