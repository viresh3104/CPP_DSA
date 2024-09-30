// print the intersection of the two arrays


#include <iostream>
using namespace std;
int main(){
    int arr_1[6] = {1,2,3,4,5,6};
    int arr_2[8] = {7,8,9,3,4,5,0,1};
    int size_arr_1 = 6 , size_arr_2 = 8;
    int intersec_arr[size_arr_1];
    int index_intersec_arr = 0;

    for(int i =0; i< size_arr_1;i++){
        int count = 0;
        for(int j = 0; j < size_arr_2; j++){
            if(arr_1[i] == arr_2[j]){
                count += 1;
            }
        }
        if(count >= 1){
            intersec_arr[index_intersec_arr] = arr_1[i];
            index_intersec_arr++;
        }
    }

    cout << "Intersection Elements are: ";
    for(int i = 0; i<index_intersec_arr;i++){
        cout << intersec_arr[i] << " ";
    }
}



// Intersection Elements are: 1 3 4 5