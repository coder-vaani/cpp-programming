// Array implementation
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements -->" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Arr[" << i << "]: ";
        cin >> arr[i];
    }

    cout << "\nArray elements are: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}