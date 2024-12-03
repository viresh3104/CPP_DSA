#include <iostream>
#include <vector>
using namespace std;

int diagonal_sum(vector<vector<int>> mat)
{
    int sum = 0;
    int n = mat.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum += mat[i][j];
            }
            else if (j == n -1 - i && i!= j)
            {
                sum += mat[i][j];
            }
        }
    }
    return sum;
}

int main(){
    vector<vector<int>>matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    cout << "Diagonal sum is: " << diagonal_sum(matrix) << endl;
}