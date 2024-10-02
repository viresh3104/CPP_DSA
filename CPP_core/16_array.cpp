// array is a data structure
// data structures used to store the data
// data structures are used to store the data in a structured way

// array store the multiple variables or elements
// array is a collection of elements

// it sotre the same type of data
// continous in the memory i.e linear ds
// it can store the duplicate values
// it can store the null values


#include <iostream>
using namespace std;

int main(){
    int marks[5] = {15,14,12,13,10};            // this will store the 5 int values in array named marks

    // if dont want to declare the size of the arra then we can simply keep it blank and the array intilized is the same size of elements it contains
    int price[] = {99,20,32} ;                   // this array is automatically of size 3


    // indexing of an array always goes form 0 to (size-1)
    // here indexing of the marks array is form 0 to (5-1) = 0 to 4
    // lets access the 12 marks which is at the index 2 
    cout<<marks[2]<<endl;                       


    // we can also change or manipulate the data items, suppose i want to change the index 2 which is 12 to 16,
    marks[2] = 16;                               // this will change the value of the index
    cout<<marks[2]<<endl;                        // now the value of index 2 is 16


    // to get the size of an array we use 
    cout << sizeof(marks) << "\n";                 // this will print the 20 
    // because int occupy the 4 bytes memory and 5 int elements in the array so,  4*5 = 20 
    // so to get the length we use
    cout << sizeof(marks) /sizeof(int) << "\n";
}
