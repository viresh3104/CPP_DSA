#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int current_element = arr[i];
        int previous_element = i - 1;
        while (previous_element >= 0 && arr[previous_element] > current_element)
        {
            arr[previous_element + 1] = arr[previous_element];
            previous_element--;
        }
        arr[previous_element + 1] = current_element;
    }
}

int main()
{
    int arr[] = {5, 2, 8, 1, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertion_sort(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}