#include <iostream>
using namespace std;

template <typename T>
class ArrayQueue {
private:
    T* array;
    int front;
    int rear;
    int size;
    int capacity;

public:
    ArrayQueue(int capacity) : capacity(capacity) {
        array = new T[capacity];
        front = 0;
        rear = -1;
        size = 0;
    }

    ~ArrayQueue() {
        delete[] array;
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == capacity;
    }

    int getSize() {
        return size;
    }

    void enqueue(T item) {
        if (isFull()) {
            std::cout << "Queue is full. Cannot enqueue." << std::endl;
            return;
        }
        rear = (rear + 1) % capacity;
        array[rear] = item;
        size++;
    }

    T dequeue() {
        if (isEmpty()) {
            std::cout << "Queue is empty. Cannot dequeue." << std::endl;
            return T(); // Return a default value for the data type T
        }
        T item = array[front];
        front = (front + 1) % capacity;
        size--;
        return item;
    }

    T peek() {
        if (isEmpty()) {
            std::cout << "Queue is empty. Cannot peek." << std::endl;
            return T(); // Return a default value for the data type T
        }
        return array[front];
    }
};

int main() {
    ArrayQueue<int> queue(5);

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);

    std::cout << "Dequeued: " << queue.dequeue() << std::endl;
    std::cout << "Peek: " << queue.peek() << std::endl;

    queue.enqueue(40);
    queue.enqueue(50);
    queue.enqueue(60);

    while (!queue.isEmpty()) {
        std::cout << "Dequeued: " << queue.dequeue() << std::endl;
    }

    return 0;
}
