// sum of all numbers from 1 to n

#include <iostream>
using namespace std;
// int main() {
//     int n;
//     int sum = 0;

//     cout << "Enter a number: ";
//     cin >> n;
//     for(int i=1; i<=n ; i++)  {
//         sum += i;
//     } 

//     cout << sum << " ";
//     return 0;
// }



// sum of all odd numbers till 1 to n

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int odd_sum = 0;

    for(int i=1 ; i <= n ; i++){
        if(i % 2 != 0){
            odd_sum += i;
        }
    }
    cout << "sum till " << n << " Odd numbers is " << odd_sum; 
}
