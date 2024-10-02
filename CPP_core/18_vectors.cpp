// vectors are similar to array but
// they have dynamic memeory allocation
// and they are used to store large amount of data

// syntax of vectors:
// vector<int> abc;      ,here vector is keyword, int is the datatype and abc is name of the vector
// initially the size of the vector abc is set to zero as it have 0 element in it.


#include <iostream>
#include <vector>                     // we hvae to include this header file to use vector
using namespace std;

int main(){
    vector<int> viresh;
    // cout << viresh[0];         //here we are tring to acces the zeroth index element in the empty vector so this will shows an error : Segmentation fault (core dumped)

    vector <int> srishti = {1,2,3,4,5};               // created vector is of size 3
    cout << srishti[2] << "\n";                                
    
    vector <int> kalpana(5,0);                     // this will create the vector with size 5 and each value is set to 0

    // genrally we use a special type of loop on vectors, known as for each loop
    for(int value : kalpana){
        cout << value << " ";                                 // in this loop value iterater contains the value in the vector not the index not the iterations.
    }


    cout << "\n";
    return 0;
}