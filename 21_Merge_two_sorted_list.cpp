#include <iostream>
using namespace std;

// Node structure
struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = nullptr;
    }
};

// Function to merge two sorted linked lists
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

    ListNode* dummy = new ListNode(-1);
    ListNode* current = dummy;

    while (list1 != nullptr && list2 != nullptr) {

        if (list1->val <= list2->val) {
            current->next = list1;
            list1 = list1->next;
        }
        else {
            current->next = list2;
            list2 = list2->next;
        }

        current = current->next;
    }

    // Attach remaining nodes
    if (list1 != nullptr) {
        current->next = list1;
    }
    else {
        current->next = list2;
    }

    return dummy->next;
}

// Function to print linked list
void printList(ListNode* head) {

    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }

    cout << endl;
}

int main() {

    // First sorted list: 1 -> 2 -> 4
    ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(2);
    list1->next->next = new ListNode(4);

    // Second sorted list: 1 -> 3 -> 4
    ListNode* list2 = new ListNode(1);
    list2->next = new ListNode(3);
    list2->next->next = new ListNode(4);

    cout << "List 1: ";
    printList(list1);

    cout << "List 2: ";
    printList(list2);

    // Merge lists
    ListNode* mergedList = mergeTwoLists(list1, list2);

    cout << "Merged List: ";
    printList(mergedList);

    return 0;
}