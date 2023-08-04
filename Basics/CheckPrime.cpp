// check if a number is prime
#include <iostream>
using namespace std;

// function to check prime
bool checkPrime(int n)
{
    if (n == 1)
        return false;
    if (n == 2)
        return true;

    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (checkPrime(n) == true)
        cout << n << " is a Prime Number.";
    else
        cout << n << " is not a Prime Number.";
}