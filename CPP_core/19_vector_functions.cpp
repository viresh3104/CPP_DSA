#include <iostream>
#include <vector> 
using namespace std;

int main(){
    vector<char> vec = {'a','b','c','d','e'};

    // 1. size function
    cout << "Size: " << vec.size() << "\n";

    // 2. push_back function
    vec.push_back('f');
    cout << "Size after pushing 'f': " << vec.size() << "\n";

    // 3. pop_back function
    vec.pop_back();                                                      // pops the last value in that vector i.e f in this case       
    cout << "Size after popping last element: " << vec.size() << "\n";

    // 4. front function
    cout << "Front element: " << vec.front() << "\n";

    // 5. back function
    cout << "Back element: " << vec.back() << "\n";

    // 6. at function                                              
    // this will used to access the element at perticular index and same as vec[index] == vec.at(index)
    cout << "Element at index 2: " << vec.at(2) << "\n";           

}