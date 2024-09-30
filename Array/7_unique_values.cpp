// print the all the unique values in the array

#include <iostream>
using namespace std;

int main(){
    int arr[7] = {1,2,3,4,5,1,2};
    int size = 7 ;
    int unique_arr[size];
    int unique_index_count = 0;
    
    for(int i =0; i<size; i++){
        int count = 0;
        for(int j=0;j<size;j++){
            if(arr[i] == arr[j]){
                count +=1;
            }
        }
        if(count == 1){    
            unique_arr[unique_index_count] = arr[i];
            unique_index_count++;
        }
    }

    // Output the unique values in the array
    cout << "The unique values in the array are: ";
    for (int i = 0; i < unique_index_count; i++) {
        cout << unique_arr[i] << " ";
    }


    cout << "\n";
    return 0;
}