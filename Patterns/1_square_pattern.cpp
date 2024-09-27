// print numbers: 
// Enter the Number: 6
// 1 2 3 4 5 6 
// 1 2 3 4 5 6 
// 1 2 3 4 5 6 
// 1 2 3 4 5 6 
// 1 2 3 4 5 6 
// 1 2 3 4 5 6 

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the Number: ";
    cin >> n;

    for(int i=1; i<=n ;i++){
        for(int j =1; j <=n; j++){
            cout << j << " ";
        }
    cout << "\n";
    }
}






// print stars *
// Enter the Number: 7
// * * * * * * * 
// * * * * * * * 
// * * * * * * * 
// * * * * * * * 
// * * * * * * * 
// * * * * * * * 
// * * * * * * * 


// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the Number: ";
//     cin >> n;

//     for(int i=1; i<=n ;i++){
//         for(int j =1; j <=n; j++){
//             cout << "*" << " ";
//         }
//     cout << "\n";
//     }
// }






// print alphabets (a,b,c,d in patterns)
// Enter the Number: 6
// A B C D E F 
// A B C D E F 
// A B C D E F 
// A B C D E F 
// A B C D E F 
// A B C D E F 


// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the Number: ";
//     cin >> n;

//     for(int i=1; i<=n ;i++){
//         char ch = 'A';
//         for(int j =1; j <=n; j++){
//             cout << ch << " ";
//             ch++;
//         }
//     cout << "\n";
//     }
// }