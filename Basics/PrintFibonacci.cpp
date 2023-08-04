// print fibonacci series upto n
#include <iostream>
using namespace std;

// function to print fibonacci
void printFibonacci(int n)
{
    int n1 = 0, n2 = 1, n3;
    if (n == 1)
    {
        cout << n1;
    }
    else if (n == 2)
    {
        cout << n1 << " " << n2;
    }
    else
    {
        cout << n1 << " " << n2 << " ";
        for (int i = 2; i < n; i++)
        {
            n3 = n1 + n2;
            cout << n3 << " ";
            n1 = n2;
            n2 = n3;
        }
    }
}

int main()
{
    int n;
    cout << "Enter the no. of terms: ";
    cin >> n;

    cout << "Fibonacci series upto " << n << " terms: ";
    printFibonacci(n);
}