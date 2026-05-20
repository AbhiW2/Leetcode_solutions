#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

void insert(Node*& head, int val) {

    Node* newNode = new Node(val);

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

bool search(Node* head, int key) {

    Node* temp = head;

    while (temp != NULL) {

        if (temp->data == key) {
            return true;
        }

        temp = temp->next;
    }

    return false;
}

void printList(Node* head) {

    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }

    cout << "NULL" << endl;
}

int main() {

    Node* head = NULL;

    insert(head, 10);
    insert(head, 20);
    insert(head, 30);
    insert(head, 40);

    cout << "Linked List: ";
    printList(head);

    int key = 30;

    if (search(head, key))
        cout << key << " Found" << endl;
    else
        cout << key << " Not Found" << endl;

    return 0;
}