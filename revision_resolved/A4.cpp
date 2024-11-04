// 136. majority_element:
// Given an array nums of size n, return the majority element.
// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

// Example 1:
// Input: nums = [3,2,3]
// Output: 3

// Example 2:
// Input: nums = [2,2,1,1,1,2,2]
// Output: 2


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int majority_element(vector<int> nums){
    sort(nums.begin(), nums.end());

    int frequency = 1;
    int ans = nums[0];

    for(int i = 1 ; i <nums.size()-1 ; i++){
        if(nums[i]  == ans){
            frequency++;
        } else{
            frequency--;
            ans = nums[i];
        }
    }
    return frequency  > nums.size()/2 ? ans : -1;
}

int main(){
    vector<int> nums = {2,2,1,1,1,2,2};
    cout<<majority_element(nums)<<endl;
    return 0;
}
