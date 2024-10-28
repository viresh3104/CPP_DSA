#include <iostream>
#include <vector>
using namespace std;


int binary_search(vector<int> num, int target){
    int n =  num.size();
    int st = 0;
    int end = n-1;

    
    
    while(st <= end){
        int mid = st + (end-st)/2;
        if(target > num[mid]){
            st = mid +1;
        } else if( target < num[mid]){
            end = mid - 1;
        } else {
            return mid;
        }
    }
    return -1;
}


int main(){
    vector<int> num = {1,2,3,4,4,6,7,8,11,13};
    int target = 8;

    cout << binary_search(num , target) << endl;
}