// check if a number is armstrong
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0, temp = n;
    while (temp > 0)
    {
        int r = temp % 10;
        sum += r * r * r;
        temp = temp / 10;
    }

    if (n == sum)
        cout << n << " is Armstrong Number.";
    else
        cout << n << " is not Armstrong Number.";
}