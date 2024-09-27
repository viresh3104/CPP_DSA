#include <iostream>
using namespace std;
int main(){
    int n =4;

    for(int i =0; i<n; i++){
        for(int j =0; j<(i+1); j++){
            cout<<"* ";
        }
        cout<< "\n";
    }
    return 0;
}

// * 
// * * 
// * * * 
// * * * * 





// same for numbers
// int main(){
//     int n = 4;
//     int num = 1;


//     for(int i=0; i < n; i++){
//         for(int j=0; j<(i+1);j++){
//             cout << num << " ";
//         }
//         num++;
//         cout << "\n";
//     }
// }

// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 








// same for the characters
// int main(){
//     int n = 4;
//     char ch = 'A';


//     for(int i=0; i < n; i++){
//         for(int j=0; j<(i+1);j++){
//             cout << ch << " ";
//         }
//         ch++;
//         cout << "\n";
//     }
// }

// A 
// B B 
// C C C 
// D D D D 