// calculate the sum of digits in the number
// e.g 143 = 8


#include <iostream>
using namespace std;

int sum_of_digi(int num){
    int sum = 0;
    while (num > 0){
        int last_digit = num % 10;
        sum += last_digit;
        num = num / 10;
    }
    return sum;
}


int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << "Sum of digits in the number " << num << " is " << sum_of_digi(num) << "\n";
}