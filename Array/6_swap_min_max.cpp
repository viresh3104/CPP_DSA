// swap the minimun and maximum number in the array

#include <iostream>
using namespace std;
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

    
    int smallest = arr[0] , largest = arr[0];
    int largest_index, smallest_index;


// find the max number and min number
    for(int i =0; i < size; i++){
        smallest = min(arr[i] ,smallest);
        largest = max(arr[i], largest);
    }


// find the index of max and min number
    for(int i=0; i<size; i++){
        if(arr[i] == largest){
            largest_index = i;
        }
        if(arr[i] == smallest){
            smallest_index = i;
        }
    }


// swap and print the array
    swap(arr[smallest_index], arr[largest_index]);
    for(int i = 0; i <size ; i++){
        cout<<arr[i]<<" ";
    }

}