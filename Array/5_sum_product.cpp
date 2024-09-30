// write a function to find sum and product of all the elements in the array

#include <iostream>
using namespace std;

// function:
void sum_product(int arr[], int size){
    int sum = 0;
    int product =1;
    for (int i = 0; i < size ; i++){
        sum += arr[i];
        product *= arr[i];
    }
    cout << "Sum is " << sum << "\n";
    cout << "Product is " << product << "\n";
}




int main(){
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    sum_product(arr ,size);
}