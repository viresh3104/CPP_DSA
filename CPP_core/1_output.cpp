// cpp is the case sensative language
// cout is used to print the output 


// cout << "hello chomu";
// so idealy this should print the string inside the "?"
// but this will not work because in cpp we have to specify the whole thing inside the main function 


// syntax for that is main fuunction is :
// int main() {
//     cout << "hello chomu";
// }



// ye bhi run nahi hoga cause system dont know what does cout means 
// so for that we have to give path of the file in which logic of the language is written
// which is the iostream in most of the cases
// so we have to include that file in our code
// so the correct code will be

#include <iostream>
using namespace std;

int main() {
    cout << "hello chomu \n";
    return 0;
}


// here we wrote return 0 in the end of int function , code can be executed without it also but it is a integer function so we have to write it
// acche progemmer is nishani hai woh likhna, mtlb mere jaise, heeehe!!!!




// in html when we type ! and press enter then the block of code appers known as boilerplate code 
// in cpp its like

// #include <iostream>
// using namespace std;
// int main() {
//     // code here
//     return 0;
// }