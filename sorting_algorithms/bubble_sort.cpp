#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n){   // On^2

    for(int i = 0 ; i < n-1 ; i++){

        for(int j = 0 ; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}


int main(){
    int arr[] = {64,34,25,12,22,11,90};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr, n);
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;

}