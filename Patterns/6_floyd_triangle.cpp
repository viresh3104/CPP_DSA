#include <iostream>
using namespace std;

int main(){
    int n = 4;

    int num = 1;
    for(int i=0; i < n; i++){
        for(int j=0; j<(i+1);j++){
            cout << num << " ";
            num++;
        }
        cout << "\n";
    }
}

// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 







// same for the characters
// int main(){
//     int n = 4;

//     char ch = 'A';
//     for(int i=0; i < n; i++){
//         for(int j=0; j<(i+1);j++){
//             cout << ch << " ";
//             ch++;
//         }
//         cout << "\n";
//     }
// }

// A 
// B C 
// D E F 
// G H I J 