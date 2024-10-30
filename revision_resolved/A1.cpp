// kadanes_alogrithm

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int max_sum_of_subarrya(int num[] , int size){
    int current_sum = 0 ;
    int max_sum = INT_MIN;

    for(int i = 0; i < size ; i++){
        current_sum += num[i];
        max_sum = max(current_sum, max_sum);
        if(current_sum < 0){
            current_sum = 0;
        }
    } 
    return max_sum;
}

int main(){
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << max_sum_of_subarrya(arr, size) << endl;
}