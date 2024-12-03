#include <iostream>
using namespace std;

bool linersearch(int matrix[][3], int rows, int coloum, int key)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < coloum; j++)
        {
            if (matrix[i][j] == key)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int rows = 4;
    int columns = 3;

    if (linersearch(matrix, rows, columns, 5))
    {
        cout << "Element found in the matrix" << endl;
    }
    else
    {
        cout << "Element not found in the matrix" << endl;
    }
    return 0;
}