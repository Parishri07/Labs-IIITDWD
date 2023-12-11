#include <iostream>
#include <vector>

void upHeapify(std::vector<int>& arr, int index) {
    int parent = (index - 1) / 2;
    while (index > 0 && arr[index] > arr[parent]) {
        std::swap(arr[index], arr[parent]);
        index = parent;
        parent = (index - 1) / 2;
    }
}

void downHeapify(std::vector<int>& arr, int index, int size) {
    int leftChild = 2 * index + 1;
    int rightChild = 2 * index + 2;
    int largest = index;

    if (leftChild < size && arr[leftChild] > arr[largest])
        largest = leftChild;
    if (rightChild < size && arr[rightChild] > arr[largest])
        largest = rightChild;

    if (largest != index) {
        std::swap(arr[index], arr[largest]);
        downHeapify(arr, largest, size);
    }
}

void buildMaxHeap(std::vector<int>& arr) {
    int size = arr.size();

    // Perform down-heapify for each non-leaf node in reverse order.
    for (int i = size / 2 - 1; i >= 0; i--) {
        downHeapify(arr, i, size);
    }
}

int main() {
    std::vector<int> arr = {4, 10, 3, 5, 1};
    int size = arr.size();

    std::cout << "Original Array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    buildMaxHeap(arr);

    std::cout << "\nMax Heap: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
