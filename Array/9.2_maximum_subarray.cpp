// noe we have learend how to get all the possible subarrays from the given array
// lets calculate the maximun sum of any subarray

#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[8] = {1, 3, -2, 7, 4, -8, 2, 8};
    int size = 8;
    int maximum_sum = INT_MIN;
    int start = 0, end = 0;

    for (int i = 0; i < size; i++) {
        int sum = 0;
        for (int j = i; j < size; j++) {
            sum += arr[j];
            if (sum > maximum_sum) {
                maximum_sum = sum;
                start = i;
                end = j; 
            }
        }
    }

    cout << "Maximum Sum of Subarray: " << maximum_sum << endl;
    cout << "Subarray with Maximum Sum: ";
    for (int i = start; i <= end; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}




// glt hai bhai 
// aa nahi aa raha subarray print karana
// bs maximum sum print ho jayegi