#include <iostream>
#include <vector>
#include <climits>
using namespace std;


bool isPossibleAns(vector<int> arr , int n , int m ,int mid){
    int painter = 1 ,  time = 0;

    for(int i = 0; i < n ; i++){
        if(time + arr[i] <= mid){
            time += arr[i];
        } else{
            painter++;
            time = arr[i];
        }
    }

    return painter <= m ? true : false;
}


int painter_partition(vector<int> arr,int n, int m){
    int sum = 0, max_val = INT_MIN;
    for(int i =0; i < n; i++){
        sum += arr[i];
        max_val = max(max_val, arr[i]);
    }

    int st = max_val ,  end = sum , ans = -1;
    while(st <= end){
        int mid = st + (end - st) / 2;

        if(isPossibleAns(arr,n,m,mid)){
            ans = mid;
            end = mid -1;
        } else{
            st = mid +1;
        }
    }
    return ans;
}


int main(){
    vector<int> arr = {40,30,10,20};
    int n = 4;
    int m = 2;
    cout << painter_partition(arr, n, m) << endl;
}