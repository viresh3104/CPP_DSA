// finding all the the possible subarrays in the given array

#include <iostream>
using namespace std;
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    for(int start =0; start <size; start++){
        for(int end=start; end<size; end++){
            for(int i = start; i<=end; i++){
                cout << arr[i];
            }
        cout << " ";
        }
    cout << "\n";
    }
}


// 1 12 123 1234 12345 
// 2 23 234 2345 
// 3 34 345 
// 4 45 
// 5