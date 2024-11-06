#include <iostream>
using namespace std;

void selection_sort(int arr[], int n){ 
    for(int i = 0 ; i<n-1 ; i++){
        int smallest_idx = i;

        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[smallest_idx]){
                smallest_idx = j;
            }
        }
        swap(arr[i] , arr[smallest_idx]);
    }
}


int main(){
    int arr[] = {64, 34, 25, 12, 22};
    int n = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr, n);
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;

}