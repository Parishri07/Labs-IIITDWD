#include <iostream>
using namespace std;

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
           ListNode head(0);
    ListNode* current = &head; 

    while (list1 && list2) {
        if (list1->val < list2->val) {
            current->next = list1;
            list1 = list1->next;
        } else {
            current->next = list2;
            list2 = list2->next;
        }
        current = current->next; 
    }

    if (list1) {
        current->next = list1;
    }
    if (list2) {
        current->next = list2;
    }

    return head.next;
    }
};

int main() {
    ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(4);
    list1->next->next = new ListNode(5);

    ListNode* list2 = new ListNode(7);
    list2->next = new ListNode(9);
    list2->next->next = new ListNode(2);

    ListNode* merged_list = mergeTwoLists(list1, list2);

    while (merged_list) {
        cout << merged_list->val << " -> ";
        merged_list = merged_list->next;
    }
    cout << "nullptr" << endl;

    return 0;
}