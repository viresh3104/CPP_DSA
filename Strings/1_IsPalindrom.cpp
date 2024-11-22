#include <iostream>
#include <string>
using namespace std;

bool isAlphaNum(char ch)
{
    if ((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z'))
    {
        return true;
    }
    return false;
}

int IsValidPalindrom(string abc)
{
    int st = 0;
    int end = abc.size() - 1;
    bool IsPalindrom = true;
    while (st < end)
    {
        if (isAlphaNum(!abc[st]))
        {
            st++;
            continue;
        }
        if (isAlphaNum(!abc[end]))
        {
            end--;
            continue;
        }
        if (abc[st] != abc[end])
        {
            IsPalindrom = false;
        }
        st++;
        end--;
    }
    return IsPalindrom;
}

int main()
{
    string str = "racecar";
    cout << IsValidPalindrom(str) << endl;
    return 0;
}
