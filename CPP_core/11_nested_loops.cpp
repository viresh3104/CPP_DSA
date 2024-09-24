#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of Rows: ";
    cin >> n;

    int m;
    cout << "Enter number of Columns: ";
    cin >> m;

    for(int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            cout << "*";
        }
    cout << "\n";
    }
    return 0;

}



// for each single iteration of the outer for loop, inner loop executes completly i.e all iteration
// so inner loop is called as nested loop