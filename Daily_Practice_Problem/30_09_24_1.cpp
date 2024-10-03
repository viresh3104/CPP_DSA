// smallest and largest in the array

#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4,5};
    int size = 5;
    int smallest = arr[0];
    int largest = arr[0];

    for(int i =0; i<size;i++){
        if(arr[0] > arr [i]){
            smallest = arr[i];
        }
        
        // or we can also write
        // smallest = min(smallest, arr[i]);

        largest = max(largest,arr[i]);

    }
    cout << smallest << "\n";
    cout << largest << "\n";

}