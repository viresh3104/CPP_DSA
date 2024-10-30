#include <iostream>
#include <vector>
using namespace std;


bool isValid(vector<int> arr , int no_of_pages , int no_of_Students , int mid){
    int students = 1 , pages = 0;

    for(int i = 0 ; i<no_of_pages; i++){
        if(arr[i] > mid){
            return false;
        }

        if(pages+arr[i] <= mid){
            pages += arr[i];
        } else{
            students += 1;
            pages = arr[i];
        }
    }

    return no_of_Students < students ? false : true;
}




int allocate_books(vector<int> arr , int no_of_pages , int no_of_Students){
    if(no_of_Students > no_of_pages){
        return -1;
    }

    int sum = 0;
    for(int i = 0 ; i < no_of_pages ;i++){
        sum += arr[i];
    }


    int start = 0,  end = sum; //range
    int ans = -1;


    while(start <= end){
        int mid = start + (end - start)/2;


        if(isValid(arr, no_of_pages , no_of_Students , mid)){
            ans = mid;
            end = mid - 1;
        } else{
            start = mid + 1;
        }
    }
    return ans;
}






int main(){
    vector<int> arr = {2,1,3,4};
    int no_of_pages = 4;
    int no_of_Students = 2;
    cout << allocate_books(arr, no_of_pages, no_of_Students) << endl;
}