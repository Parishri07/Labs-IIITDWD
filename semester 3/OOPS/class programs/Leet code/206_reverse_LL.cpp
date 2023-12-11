#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp1 = head;
        ListNode* temp2 = nullptr;
        while (temp1 != nullptr) {
            ListNode* nextNode = temp1->next;
            temp1->next = temp2;
            temp2 = temp1;
            temp1 = nextNode;
        }
        return temp2;
    }
};

int main() {
  Solution s;
  ListNode* head = new ListNode(10);
  head->next = new ListNode(20);
  head->next->next = new ListNode(50);

  ListNode* rev = s.reverseList(head);
  ListNode* current = rev;
    while (current != nullptr) {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;
    return 0;
}
