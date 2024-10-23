// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
// You must write an algorithm that runs in O(n) time and without using the division operation.

// Example 1:
// Input: nums = [1,2,3,4]
// Output: [24,12,8,6]

// Example 2:
// Input: nums = [-1,1,0,-3,3]
// Output: [0,0,9,0,0]


#include <iostream>
#include <vector>
using namespace std;

vector<int> product_except_self(vector<int> nums){
    int n = nums.size();

    vector<int> answer(n, 1);
    vector<int> prefix(n,1);
    vector<int> suffix(n,1);

    // for prefix
    for(int i = 1; i < n; i++){
        prefix[i] = prefix[i-1] * nums[i-1];
    }

    // for suffix
    for(int i = n-2; i >= 0; i--){
        suffix[i] = suffix[i+1] * nums[i+1];
    }

    // for answer
    for(int i = 0; i < n; i++){
        answer[i] = prefix[i] * suffix[i];
    }

    return answer;  
}



int main() {
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = product_except_self(nums);

    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
