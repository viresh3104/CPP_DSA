#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int> nums, int cows, int polls, int mid){
    int last_placed_poll = 0;
    int no_of_cows = 1;

    for(int i = 1; i<polls; i++){
        if(nums[i] - last_placed_poll >= mid){
            no_of_cows++;
            last_placed_poll = nums[i];
        }

        if(no_of_cows == cows){
            return true;
        }
    }
    return false;
}


int aggresive_cows(vector<int> nums, int cows, int polls){
    sort(nums.begin() , nums.end());

    int st = 1;
    int end = nums[polls -1] - nums[0];         //largest minus smallest value in array to get distance betwen them
    int ans = -1;

    while(st <= end){
        int mid = st + (end - st) / 2;

        if(isPossible(nums, cows, polls, mid)){
            st = mid +1;
            ans = mid;
        } else{
            end = mid - 1;
        }
    }
    return ans;
}



int main(){
    vector<int> nums = {1,2,8,4,9};
    int no_of_cows = 3;
    int no_of_polls = 5;
    cout << aggresive_cows(nums, no_of_cows, no_of_polls) << endl;
}