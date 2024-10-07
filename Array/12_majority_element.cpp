// 136. majority_element:
// Given an array nums of size n, return the majority element.
// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

// Example 1:
// Input: nums = [3,2,3]
// Output: 3

// Example 2:
// Input: nums = [2,2,1,1,1,2,2]
// Output: 2


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// brute force approach:

// vector<int> MajorityElement(vector<int> nums){
//     for(int i = 0 ; i < nums.size() ; i++){
//         int count = 0;
//         for(int j = i; j< nums.size() ; j++){
//             if(nums[i] == nums[j]){
//                 count++;
//             }
//         }
//         if(count >= nums.size() / 2){
//             return {nums[i]};
//         }
//     }
//     return {};
// }


// more optimized approach
// we can first sort the array in the ascending order then we can count the frequency
// of each element and return the element with the highest frequency

int MajorityElement(vector<int> nums){
    sort(nums.begin(), nums.end());                 // at this step array is sorted
    int frequency = 1,  ans = nums[0];

    for(int i =1; i < nums.size() ; i++){
        if(nums[i] == nums[i-1]){                   // loop is starting at the position 1 and check the number at position1 and position 0 [i-1]
            frequency++;                            // if that two elements are same then freq is +1
        }
        else{
            frequency = 1;                          // when that two elements are not same then we can reset freq = 1 and ans = next idx
            ans = nums[i];
        }


        if(frequency > (nums.size()) / 2){
            return ans;
        }
    }
    return ans;
}








int main() {
    vector<int> nums = {1, 2, 2, 1, 1, 3}; 
    // vector<int> result = MajorityElement(nums);                       // for brute force
    // cout << "Majority element: " << result[0] << endl;

    int result = MajorityElement(nums);                                   // for dp
    cout << "Majority element: " << result << endl;

    return 0;
}





