// pattern :
// eg n =4 

// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16



#include <iostream>
using namespace std;
// int main(){
//     int n;
//     cout << "Enter the Number: ";
//     cin >> n;

//     int num = 1;
//     for(int i = 0; i < n ; i++){
//         for(int j = 0; j< n ; j++){
//             cout << num << " ";
//             num++;
//         }
//         cout << "\n";
//     }
// }



// do the same for the alphabtes

// pattern :
// eg n =4 

// a b c d
// e f g h
// i j k l
// m n o p
int main(){
    int n;
    cout << "Enter the Number: ";
    cin >> n;


    char ch = 'A';
    for(int i=0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << ch << " ";
            ch++;
        }
        cout << "\n";
    }
}