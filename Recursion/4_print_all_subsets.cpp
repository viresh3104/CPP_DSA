#include <iostream>
#include <vector>
using namespace std;

void print_subsets(vector<int> &nums, vector<int> &ans, int i){
    //base case 
    if(i == nums.size()){
        for(int val: ans){
            cout << val << " ";
        }
        cout << endl;
        return;
    }

    //include choice
    ans.push_back(nums[i]);
    print_subsets(nums, ans, i+1);

    //exclude choice
    ans.pop_back();
    print_subsets(nums, ans,i+1);
}

int main(){
    vector<int> nums = {1,2,3};
    vector<int> ans;

    print_subsets(nums, ans, 0);
    return 0;
}




// op:
// 1 2 3 
// 1 2 
// 1 3 
// 1 
// 2 3 
// 2 
// 3 
// null set