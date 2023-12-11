#include <iostream>
#include <vector>
#include <queue>

// Definition for a binary tree node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Function to insert elements from an array into a binary tree
TreeNode* insert(std::vector<int>& arr, int start, int end) {
    if (start > end) {
        return nullptr;
    }

    int mid = (start + end) / 2;
    TreeNode* root = new TreeNode(arr[mid]);

    root->left = insert(arr, start, mid - 1);
    root->right = insert(arr, mid + 1, end);

    return root;
}

// Function to create a Min Heap from a binary tree
void heapifyMin(TreeNode* root) {
    if (root == nullptr) {
        return;
    }

    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;

    // Traverse the tree using level order and insert elements into the min heap
    std::queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* current = q.front();
        q.pop();

        if (current) {
            minHeap.push(current->val);
            q.push(current->left);
            q.push(current->right);
        }
    }

    // Reconstruct the tree with min heap values
    q.push(root);

    while (!q.empty()) {
        TreeNode* current = q.front();
        q.pop();

        if (current) {
            current->val = minHeap.top();
            minHeap.pop();
            q.push(current->left);
            q.push(current->right);
        }
    }
}

// Function to create a Max Heap from a binary tree
void heapifyMax(TreeNode* root) {
    if (root == nullptr) {
        return;
    }

    std::priority_queue<int> maxHeap;

    // Traverse the tree using level order and insert elements into the max heap
    std::queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* current = q.front();
        q.pop();

        if (current) {
            maxHeap.push(current->val);
            q.push(current->left);
            q.push(current->right);
        }
    }

    // Reconstruct the tree with max heap values
    q.push(root);

    while (!q.empty()) {
        TreeNode* current = q.front();
        q.pop();

        if (current) {
            current->val = maxHeap.top();
            maxHeap.pop();
            q.push(current->left);
            q.push(current->right);
        }
    }
}

// Function to print binary tree nodes in a single line
void printBinaryTree(TreeNode* root) {
    if (root == nullptr) {
        return;
    }

    printBinaryTree(root->left);
    std::cout << root->val << " ";
    printBinaryTree(root->right);
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int n = arr.size();

    // Create a binary tree from the array
    TreeNode* root = insert(arr, 0, n - 1);

    std::cout << "Binary Tree: ";
    printBinaryTree(root);
    std::cout << std::endl;

    // Create a Min Heap from the binary tree
    heapifyMin(root);

    std::cout << "Min Heap: ";
    printBinaryTree(root);
    std::cout << std::endl;

    // Create a Max Heap from the binary tree
    heapifyMax(root);

    std::cout << "Max Heap: ";
    printBinaryTree(root);
    std::cout << std::endl;

    return 0;
}
