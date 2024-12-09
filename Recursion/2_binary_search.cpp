#include<iostream>
#include<vector>
using namespace std;

//helper function
int binary_search(vector<int>& nums, int target, int st, int end){
    if(st <= end){
        int mid = st + (end-st) / 2;
        if(nums[mid] == target) return mid;
        else if(nums[mid] <= target){
            return binary_search(nums, target, mid+1, end);
        } else{
            return binary_search(nums, target, st, mid-1);
        }
    }
    return -1;
}


int search(vector<int>&nums , int target){
    return binary_search(nums, target , 0 , nums.size()-1);
}

int main(){
    vector<int> nums = {1,2,3,4,5,6,7,8,9};
    int target = 3;
    cout<< search(nums, target) << endl;
}