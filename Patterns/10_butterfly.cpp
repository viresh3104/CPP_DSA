#include <iostream>
using namespace std;

int main(){
    int n = 4;


    // top
    for(int i =0; i<n;i++){
        for(int j = 0; j<(i+1); j++){
            cout << "*";
        }
        
        if(i != n-1){
            
            for(int j=0; j<2*(n-(i+1)); j++){
                cout << " ";
            }
        }


        for(int j = 0; j<(i+1); j++){
            cout << "*";
        }

        cout << "\n";
    }
    



    for(int i = n; i >= 1; i--){
       
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
   
        for(int j = 1; j <= 2*(n-i); j++){
            cout << " ";
        }
       
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << "\n";
    }

return 0;
}