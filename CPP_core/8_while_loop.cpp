// iterate over an condition , until condition is true code inside the while block executes
// print the number between 1 and 10


#include <iostream>
using namespace std;
int main(){
    int num_n = 10;
    int count = 1;
    while (count <= num_n) {
        cout << count << " ";
        count++;
    }
    
    return 0;
}