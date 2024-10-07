// this is the dynamic approch to find the maximum sum of subarray

#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[9] = {-2,1,-3,4,-1,2,1,-5,4};
    int size = 9;
    int curr_sum = 0, max_sum =INT_MIN;

    for(int i = 0 ; i < size; i++){
        curr_sum += arr[i];
        max_sum = max(curr_sum, max_sum);
        if(curr_sum < 0){
            curr_sum = 0;
        }
    }
    cout << max_sum << endl;
    
}



// most optimized way to find the maximum sum of subarray