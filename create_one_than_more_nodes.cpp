#include <iostream>
using namespace std;

// Structure for node
struct Node
{
    int data;
    Node* next;
};

int main()
{
    int n;

    cout << "Enter number of nodes: ";
    cin >> n;

    Node *head = NULL, *temp = NULL, *newNode = NULL;

    // Creating nodes
    for(int i = 1; i <= n; i++)
    {
        newNode = new Node();

        cout << "Enter data for node " << i << ": ";
        cin >> newNode->data;

        newNode->next = NULL;

        // First node
        if(head == NULL)
        {
            head = newNode;
            temp = head;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
    }

    cout << "\nLinked List:\n";

    temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL";

    return 0;
}