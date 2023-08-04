// check if a string is palindrome
#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str)
{
    int n = str.size();
    if (n == 1)
        return false;

    for (int i = 0; i < n / 2; i++)
    {
        if (str[i] != str[n - 1 - i])
            return false;
    }
    return true;
}

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    if (checkPalindrome(str) == true)
        cout << str << " is a Palindrome String.";
    else
        cout << str << " is not a Palindrome String.";
}