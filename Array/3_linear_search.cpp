#include <iostream>
using namespace std;

int searchTarget(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Return index if target is found
        }
    }
    return -1; // Return -1 if target is not found
}

int main() {
    int arr[10] = {12, 123, 31, 43, 56, 8, 123, 45, 87, 12};
    int size = 10;
    int target = 8;

    int result = searchTarget(arr, size, target);
    if (result != -1) {
        cout << "Target found at index: " << result << endl;
    } else {
        cout << "Target not found" << endl;
    }

    return 0; // Indicate successful execution
}
