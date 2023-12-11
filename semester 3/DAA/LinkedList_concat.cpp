#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class Linked_list_Concat {
public:
    static Node* insertAtTail(Node* head1, Node* &tail1, int data) {
        Node* temp = new Node(data);
        if (tail1 == nullptr) {
            head1 = temp;
            tail1 = temp;
        } else {
            tail1->next = temp;
            tail1 = temp;
        }
        return tail1;
    }

    static void print(Node* head) {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
       cout <<endl;
    }

    static void concat(Node* head1, Node* head2, Node* tail1) {
        if (tail1 != nullptr) {
            tail1->next = head2;
        }
    }
};

int main() {
    Node* node1 = new Node(1);
    Node* head1 = node1;
    Node* tail1 = node1;

    tail1 = Linked_list_Concat::insertAtTail(head1, tail1, 2);
    tail1 = Linked_list_Concat::insertAtTail(head1, tail1, 3);
    tail1 = Linked_list_Concat::insertAtTail(head1, tail1, 4);
    tail1 = Linked_list_Concat::insertAtTail(head1, tail1, 5);

    cout << "First Linked List: " << std::endl;
    Linked_list_Concat::print(head1);

    Node* node2 = new Node(6);
    Node* head2 = node2;
    Node* tail2 = node2;

    tail2 = Linked_list_Concat::insertAtTail(head2, tail2, 7);
    tail2 = Linked_list_Concat::insertAtTail(head2, tail2, 8);
    tail2 = Linked_list_Concat::insertAtTail(head2, tail2, 9);
    tail2 = Linked_list_Concat::insertAtTail(head2, tail2, 10);

    cout << "Second Linked List: " <<endl;
    Linked_list_Concat::print(head2);

    Linked_list_Concat::concat(head1, head2, tail1);

    cout << "First Linked List after concatenation: " << endl;
    Linked_list_Concat::print(head1);

    // Clean up the memory
    Node* current = head1;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }

    current = head2;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }

    return 0;
}
