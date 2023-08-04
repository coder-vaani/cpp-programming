// check if a number is palindrome
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int rev = 0, temp = n;
    while (temp > 0)
    {
        int r = temp % 10;
        rev = (rev * 10) + r;
        temp = temp / 10;
    }

    if (n == rev)
        cout << n << " is Palindrome.";
    else
        cout << n << " is not Palindrome.";
}