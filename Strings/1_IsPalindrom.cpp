#include<iostream>
#include<string>
using namespace std;

int IsValidPalindrom(string abc){
    int st = 0;
    int end = abc.size() - 1;
    bool IsPalindrom = true;
    while(st < end){
        if(abc[st] != abc[end]){
            IsPalindrom = false;
        }
        st++;
        end--;
    }
    return IsPalindrom;
}


int main(){
    string str = "racecar";
    cout << IsValidPalindrom(str) << endl;
    return 0;
}
