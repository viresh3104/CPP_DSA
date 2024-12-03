#include<iostream>
#include<vector>
using namespace std;

bool search_in_row(vector<vector<int>> mat, int row , int target){
    int col = mat[0].size();

    int st = 0;
    int end = col-1;
    while(st <= end){
        int mid_col = st + (end-st)/2;
        
        if(target == mat[row][mid_col]){
            return true;
        } else if(target > mat[row][mid_col]){
            st = mid_col+1;
        } else{
            end = mid_col-1;
        }
    }
    return false;

}


bool search_in_mat(vector<vector<int>>mat , int target){
    int n = mat.size(), m = mat[0].size();

    int srow = 0 , erow = n-1;
    while(srow <= erow){
        int mid = srow + (erow-srow) / 2;
        if(target >= mat[mid][0] && target <= mat[mid][m-1]){
            //found the row
            //now one more function for the bs on that row
            return search_in_row(mat , mid, target);
        } else if(target > mat[mid][m-1]){
            srow = mid+1;
        } else {
            erow = mid-1;
        }

    }
    return false;
}


int main(){
    vector<vector<int>> mat = {{1,3,5,7},{10,11,16,20},{10,11,16,20}};
    int target =1;
    int result = search_in_mat(mat , target);
    cout<<(result ? "True" : "False")<<endl;
}