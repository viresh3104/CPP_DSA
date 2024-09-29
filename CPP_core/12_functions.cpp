#include <iostream>
using namespace std;


// function are used to perform predefined block of code

// defining s function:

// returntype function_name(){
//             
//          CODE BLOCK
// }


// return type means what type of integer values are returned as a output form that function like int,ch,string,float,etc

// function name is the name of the function which is used to call the function

// calling a function:
// function_name();

// lets create a function to print a greeting msg:

// void greeting(string name){
//     cout<<"Hello "<< name <<endl;
// }


// int main(){
//     string name;
//     cout << "Enter Your Name: " ;
//     cin >>  name;
//     greeting(name);
// }





// function for calulating the sum and difference
#include <iostream>
using namespace std;

void add_sum(int a, int b) {
    int sum;
    int diff;
    sum = a + b;
    diff = a - b;
    
    cout << "Sum of " << a << " and " << b << " is " << sum;
    cout << "\nDifference of " << a << " and " << b << " is " << diff << "\n";
}

int main() {
    int first_num;
    int second_num;
    
    cout << "Enter first number: ";
    cin >> first_num;
    cout << "Enter second number: ";
    cin >> second_num;

    add_sum(first_num, second_num);
    
}
