#include <iostream>
#include <string>
using namespace std;


bool IsSimilar(int s1_freq[] , int s2_freq[]){
    for(int i= 0; i <26 ; i++){
        if(s1_freq[i] != s2_freq[i]){
            return false;
        }
    }
    return true;
}


bool permutation(string s1, string s2)
{
    // store the freq of char in s1 string in array
    int s1_freq[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        s1_freq[s1[i] - 'a']++;
    }

    // initilize an window size
    int window_size = s1.length();

    for (int i = 0; i < s2.length(); i++)
    {
        int window_idx = 0 , idx = i;
        int s2_freq[26] = {0};

        while(window_idx < window_size && idx < s2.length()){
            s2_freq[s2[idx] - 'a']++;
            window_idx++ ; 
            idx++;
        }

        if(IsSimilar(s1_freq ,  s2_freq)){
            return true;
        }
    }
    return false;
}



int main()
{
    string s1 = "abc";
    string s2 = "askdascbahkjsx";
    cout << (permutation(s1, s2) ? "True" : "False") << endl;
}
