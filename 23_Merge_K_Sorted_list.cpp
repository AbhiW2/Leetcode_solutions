#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

// Comparator for min heap
struct Compare {
    bool operator()(ListNode* a, ListNode* b) {
        return a->val > b->val;
    }
};

ListNode* mergeKLists(vector<ListNode*>& lists) {

    // Min heap
    priority_queue<ListNode*, vector<ListNode*>, Compare> pq;

    // Put first node of every list into heap
    for (ListNode* head : lists) {
        if (head != NULL) {
            pq.push(head);
        }
    }

    ListNode dummy(0);
    ListNode* current = &dummy;

    while (!pq.empty()) {

        // Get smallest node
        ListNode* smallest = pq.top();
        pq.pop();

        // Add it to result
        current->next = smallest;
        current = current->next;

        // Add next node from same list
        if (smallest->next != NULL) {
            pq.push(smallest->next);
        }
    }

    return dummy.next;
}

void printList(ListNode* head) {

    while (head != NULL) {
        cout << head->val;

        if (head->next != NULL)
            cout << " -> ";

        head = head->next;
    }

    cout << endl;
}

int main() {

    // List 1
    ListNode* a = new ListNode(1);
    a->next = new ListNode(4);
    a->next->next = new ListNode(5);

    // List 2
    ListNode* b = new ListNode(1);
    b->next = new ListNode(3);
    b->next->next = new ListNode(4);

    // List 3
    ListNode* c = new ListNode(2);
    c->next = new ListNode(6);

    vector<ListNode*> lists = {a, b, c};

    ListNode* result = mergeKLists(lists);

    cout << "Merged List: ";
    printList(result);

    return 0;
}