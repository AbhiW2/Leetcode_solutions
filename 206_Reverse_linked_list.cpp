#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

    class Solution {
    public:
        ListNode* reverseList(ListNode* head) {
            ListNode* prev = NULL;

            while (head != NULL) {
                ListNode* next = head->next;
                head->next = prev;
                prev = head;
                head = next;
            }

            return prev;
        }
    };

void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
}

int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

    cout << "Original List: ";
    printList(head);

    Solution obj;
    head = obj.reverseList(head);

    cout << "\nReversed List: ";
    printList(head);

    return 0;
}