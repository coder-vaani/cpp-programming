// Linked List implementation
#include <iostream>
using namespace std;

// node declaration
class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};
node *head, *tail = NULL;

// display the list
void display()
{
    if (head == NULL)
    {
        cout << "List is empty!";
        return;
    }

    node *n = head;
    cout << "List elements are: ";
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}

// add node
void addNode()
{
    int val;
    cout << "Enter a value: ";
    cin >> val;

    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        tail = n;
    }
    else
    {
        tail->next = n;
        tail = n;
    }
    cout << "Node Inserted!\n";
}

int main()
{
    int n;
    cout << "How many nodes you want to insert: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        addNode();
    }
    display();
}