// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.

// Example 1:
// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

// Example 2:
// Input: nums = [3,2,4], target = 6
// Output: [1,2]

#include <iostream>
#include <vector>
using namespace std;

vector<int> pair_sum(vector<int> nums, int target)
{
    int st = 0, end = nums.size() - 1;
    vector<int> pair_sum_index;

    while (st < end)
    {
        if (nums[st] + nums[end] > target)
        {
            end--;
        }
        else if (nums[st] + nums[end] < target)
        {
            st++;
        }
        else
        {
            pair_sum_index.push_back(st);
            pair_sum_index.push_back(end);
            return pair_sum_index;
        }
    }
    return pair_sum_index;
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
   

    // calling the fucntion
    vector<int> result = pair_sum(nums, target);
    cout << "[" << result[0] << "," << result[1] << "]" << endl;

}