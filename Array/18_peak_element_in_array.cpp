// You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.
// Return the index of the peak element.
// Your task is to solve it in O(log(n)) time complexity.

// Example 1:
// Input: arr = [0,1,0]
// Output: 1

// Example 2:
// Input: arr = [0,2,1,0]
// Output: 1

#include <iostream>
#include <vector>
using namespace std;

int peak_element(vector<int> nums){
    int st = 1 , end = nums.size()-2;
    
    while(st <= end){
        int mid = st + (end-st)/2;

        if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]){
            return nums[mid];
        } else if(nums[mid] < nums[mid-1]){
            end = mid-1;
        } else {
            st = mid+1;
        }
    }
    return -1;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 3 ,2 ,1};
    int result = peak_element(nums);

    cout << "Peak element in the array is:: " <<result << endl;

}