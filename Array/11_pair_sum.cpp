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


// this is the dynamic approach
#include <iostream>
#include <vector>
using namespace std;

vector<int> PairSum(vector<int> nums , int target){
    vector<int> ans_idx;

    int i = 0;
    int j = (nums.size()) -1;
    while(i < j){
        int pair_sum = nums[i] + nums [j];
        if(pair_sum < target){
            i++ ;
        }
        else if(pair_sum > target){
            j--;
        }
        else{
            ans_idx.push_back(i);
            ans_idx.push_back(j);
            return ans_idx;
        }
    }
    return ans_idx;
}



int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 26;
   

    // calling the fucntion
    vector<int> result = PairSum(nums, target);
    cout << "[" << result[0] << "," << result[1] << "]" << endl;

}




// below is the brute force:

// #include <iostream>
// #include <vector>
// using namespace std;

// // Function to find two indices whose sum equals the target
// vector<int> twoSum(vector<int>& nums, int target) {
//     vector<int> ans_idx;  // To store the result indices
    
//     for (int i = 0; i < nums.size(); i++) {
//         for (int j = i + 1; j < nums.size(); j++) {
//             if (nums[i] + nums[j] == target) {
//                 ans_idx.push_back(i);
//                 ans_idx.push_back(j);
//                 return ans_idx;  // Return as soon as the solution is found
//             }
//         }
//     }
//     return ans_idx;
// }

// int main() {
//     vector<int> nums = {2, 7, 11, 15};
//     int target = 22;

//     // Call the function
//     vector<int> result = twoSum(nums, target);

//     cout << "Indices: " << result[0] << "," << result[1];


//     cout << "\n";
//     return 0;
// }