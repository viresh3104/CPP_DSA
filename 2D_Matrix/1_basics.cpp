#include <iostream>
using namespace std;

int main()
{
    // initializing the matrix
    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int rows = 4;
    int columns = 3;

    // accessing the elements in the matrix
    //  here we want to access the elememt at the 3rd row and 2nd coloum , indexing statrts form the zero; elelemt is 8
    cout << "accessing the elements in the matrix : "; 
    cout << matrix[2][1] << endl;

    // updating the element1st
    // here we are updating the element form the 9 to 13;
    matrix[2][2] = 13;
    cout << "after updating the element : ";
    cout << matrix[2][2] << endl;

    // loops on array
    // we use nested loops here , outer loop tracks the row index and inner loop tracks the coloum
    cout << "printing the matrix using loops : " << endl; 
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
