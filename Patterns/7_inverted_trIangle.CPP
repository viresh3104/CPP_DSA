#include <iostream>
using namespace std;

int main(){
    int n = 4;

    for(int i = 0; i<n; i++){ 
        // this loop will print the spaces
        for(int j=0; j < i; j++){
            cout << " ";
        }
        // this loop will print the numbers
        for(int j=0; j< (n-i);j++){
            cout << (i+1);
        }
        cout << "\n";
    }
}


// 1111
//  222
//   33
//    4



// same for the char
// int main(){
//     int n = 4;
//     char ch = 'A';

//     for(int i =0; i<n; i++){
//         for(int j=0; j < i; j++){
//             cout << " ";
//         }

//         for(int z =0; z <(n-i); z++){
//             cout << ch;
//         }
//         ch++;
//         cout << "\n";
//     }
// }

// AAAA
//  BBB
//   CC
//    D