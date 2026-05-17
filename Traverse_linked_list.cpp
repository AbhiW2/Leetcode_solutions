#include <iostream>
using namespace std;

// Node structure
struct Node
{
    int data;
    Node* next;
};

int main()
{
    // Creating nodes manually
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    // Assign data
    head->data = 10;
    second->data = 20;
    third->data = 30;

    // Connect nodes
    head->next = second;
    second->next = third;
    third->next = NULL;

    // Traversing linked list
    Node* temp = head;

    cout << "Linked List Elements:\n";

    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}