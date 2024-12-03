#include <iostream>
#include <climits>

using namespace std;

int max_row_sum(int matrix[][3], int rows, int coloum)
{
    int max_sum = INT_MIN;

    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < coloum; j++)
        {

            sum += matrix[i][j];
        }
        max_sum = max(max_sum, sum);
    }
    return max_sum;
}

int main()
{
    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int rows = 4;
    int columns = 3;
    cout << "Maximum sum of rows is " << max_row_sum(matrix, rows, columns) << endl;

}


// hw = find max coloum wise sum
// hw = search and retunrn the index of cell in matrix as a pair<i , j>