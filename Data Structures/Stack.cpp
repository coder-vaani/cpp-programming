// Stack using arr
#include <iostream>
using namespace std;

int top = -1, n = 10;
int arr[10];

// push
void push()
{
    if (top == n - 1)
    {
        cout << "Stack Overflow!\n"
             << endl;
        return;
    }

    int val;
    cout << "Enter a value: ";
    cin >> val;

    top++;
    arr[top] = val;
    cout << "Value Pushed\n"
         << endl;
}

// pop
void pop()
{
    if (top == -1)
    {
        cout << "Stack Underflow!\n"
             << endl;
        return;
    }

    top--;
    cout << "Value Popped\n"
         << endl;
}

// display
void display()
{
    if (top == -1)
    {
        cout << "Stack is empty!\n"
             << endl;
        return;
    }

    cout << "Stack elements are: ";
    for (int i = 0; i <= top; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n"
         << endl;
}

int main()
{
    cout << "*** Stack Operations ***" << endl;
    cout << "------------------------" << endl;
    int ch;

    do
    {
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "\nEnter your choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            cout << "Exited!" << endl;
            break;
        }
        default:
        {
            cout << "Invalid choice" << endl;
        }
        }
    } while (ch != 4);
}
