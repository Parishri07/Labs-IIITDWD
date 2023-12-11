#include <iostream>
using namespace std;

template <typename T>
class DoublyNode {
public:
    T data;
    DoublyNode<T>* prev;
    DoublyNode<T>* next;

    DoublyNode(T data) : data(data), prev(nullptr), next(nullptr) {}
};

template <typename T>
class DoublyLinkedListQueue {
private:
    DoublyNode<T>* front;
    DoublyNode<T>* rear;
    int size;

public:
    DoublyLinkedListQueue() : front(nullptr), rear(nullptr), size(0) {}

    bool isEmpty() {
        return size == 0;
    }

    int getSize() {
        return size;
    }

    void enqueue(T item) {
        DoublyNode<T>* newNode = new DoublyNode<T>(item);
        if (rear == nullptr) {
            front = newNode;
            rear = newNode;
        } else {
            rear->next = newNode;
            newNode->prev = rear;
            rear = newNode;
        }
        size++;
    }

    T dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return T(); // Assuming T is a type with a default constructor.
        }
        T item = front->data;
        front = front->next;
        if (front != nullptr) {
            front->prev = nullptr;
        } else {
            rear = nullptr;
        }
        size--;
        return item;
    }

    T peek() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot peek." << endl;
            return T(); // Assuming T is a type with a default constructor.
        }
        return front->data;
    }
};

int main() {
    DoublyLinkedListQueue<int> queue;

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);

    cout << "Dequeued: " << queue.dequeue() <<    endl;
    cout << "Peek: " << queue.peek() <<    endl;

    queue.enqueue(40);
    queue.enqueue(50);
    queue.enqueue(60);

    while (!queue.isEmpty()) {
        cout << "Dequeued: " << queue.dequeue() <<    endl;
    }

    return 0;
}
