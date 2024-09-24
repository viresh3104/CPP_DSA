// here condition is checked after the code block is executed 
// it means that no matter condition is true or false, code is executed at least one time

// genralized syntax : 

// do {
//      code block
// 
// }while(condition);

// print the number between 1 to 10

#include <iostream>
using namespace std;
int main(){
    int i = 1;
    int n = 10;

    do{
        cout<< i << " ";
        i++;
    } while (i <= n );

    return 0;
}
