// converting data from one type to another

// implicit :
// generaly used when converting the smaller datatype to the bigger datatype
// e.g while storing the aplhabets and numbers , there ascii values are stored


// #include <iostream>
// using namespace std;

// int main(){
//     char ch = 'A';                        // data type of ch is char so it store the Character
//     int num = ch;                         // data type of num is int so it convert the char datatype to int datatype implicitly(auto)
//     cout << ch << "\n";                   // output is char datatype which is A
//     cout << num << "\n";                  // output is int datatype which is ascii value of A i.e 65
// }





// exclicit :
// generaly used when converting the bigger datatype to the smaller datatype


#include <iostream>
using namespace std;
int main(){
    double num = 65.43;                       
    cout << num << "\n";                       // output is the num which is double dataype 65.43
    int new_num = int(num);
    cout << new_num << "\n";                   // output is int datatype which is 65
}