#include <iostream>
using namespace std; 
int main(){
    int n = 4;

    for(int i=0; i < n; i++){
        int num = 1;
        for(int j=0; j<(i+1);j++){
            cout << num << " ";
            num ++;
        }
        
        cout << "\n";
    }
}

// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 

