#include<iostream>
#include<string>
using namespace std;

string RemoveAllOccurances(string s , string part){
    while(s.length() > 0 && s.find(part) < s.length()){
        s.erase(s.find(part),  part.length());
    }
    return s;
}


int main(){
    string s = "daabcbaabcbc";
    string part = "abc";
    cout << RemoveAllOccurances(s, part) << endl;
    return 0;
}