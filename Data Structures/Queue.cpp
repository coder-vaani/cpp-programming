// Queue using array
#include <iostream>
using namespace std;

int front = -1, rear = -1, n = 10;
int arr[10];

// enqueue
void enquque()
{
    if (rear == n - 1)
    {
        cout << "Queue Overflow!\n"
             << endl;
        return;
    }

    int val;
    cout << "Enter a value: ";
    cin >> val;

    if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        rear++;
    }
    arr[rear] = val;
    cout << "Value enqueued!\n"
         << endl;
}

// dequeue
void dequeue()
{
    if (front == rear || front > rear)
    {
        cout << "Queue Underflow!\n"
             << endl;
        return;
    }

    front++;
    cout << "Value dequeued!\n"
         << endl;
}

// display
void display()
{
    if (rear == -1)
    {
        cout << "Queue is empty!\n"
             << endl;
        return;
    }

    cout << "Queue elements are: ";
    for (int i = rear; i >= front; i--)
    {
        cout << arr[i] << " ";
    }
    cout << "\n"
         << endl;
}

int main()
{
    cout << "*** Queue Operations ***" << endl;
    cout << "------------------------" << endl;
    int ch;

    do
    {
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "\nEnter your choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
        {
            enquque();
            break;
        }
        case 2:
        {
            dequeue();
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
            cout << "Invalid choice! " << endl;
        }
        }
    } while (ch != 4);
}