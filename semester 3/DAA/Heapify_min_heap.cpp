#include <iostream>
#include <vector>

// Function to perform up-heapify, which ensures the min-heap property
void upHeapify(std::vector<int>& arr, int index) {
    int parent = (index - 1) / 2; // Calculate the index of the parent node

    // While the current element is smaller than its parent and not the root
    while (index > 0 && arr[index] < arr[parent]) {
        std::swap(arr[index], arr[parent]); // Swap the current element with its parent
        index = parent; // Move to the parent node
        parent = (index - 1) / 2; // Recalculate the parent index
    }
}
// Function to perform down-heapify, which ensures the min-heap property
void downHeapify(std::vector<int>& arr, int index, int size) {
    int leftChild = 2 * index + 1; // Calculate the index of the left child
    int rightChild = 2 * index + 2; // Calculate the index of the right child
    int smallest = index; // Initialize the smallest element index as the current node

    // Check if the left child exists and is smaller than the current smallest
    if (leftChild < size && arr[leftChild] < arr[smallest])
        smallest = leftChild;

    // Check if the right child exists and is smaller than the current smallest
    if (rightChild < size && arr[rightChild] < arr[smallest])
        smallest = rightChild;

    // If the smallest element is not the current node, swap them and continue down-heapify
    if (smallest != index) {
        std::swap(arr[index], arr[smallest]);
        downHeapify(arr, smallest, size); // Recursively down-heapify the affected subtree
    }
}
// Function to build a min-heap from an array using up-heapify
void buildMinHeap(std::vector<int>& arr) {
    int size = arr.size();

    // Traverse the array in reverse order and perform up-heapify for each element
    for (int i = size - 1; i >= 0; i--) {
        upHeapify(arr, i);
    }
}

int main() {
    std::vector<int> arr = {4, 10, 3, 5, 1};
    int size = arr.size();

    std::cout << "Original Array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    buildMinHeap(arr); // Build a min-heap from the input array using up-heapify

    std::cout << "\nMin Heap: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}

