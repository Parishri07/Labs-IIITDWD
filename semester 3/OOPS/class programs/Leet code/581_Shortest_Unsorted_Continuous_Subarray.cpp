#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findUnsortedSubarrayLength(vector<int>& nums) {
    int n = nums.size();

    // Create a copy of the original array
    vector<int> sorted_nums(nums);
    sort(sorted_nums.begin(), sorted_nums.end());

    // Find the leftmost element that is not in its correct position
    int left = 0;
    while (left < n && nums[left] == sorted_nums[left]) {
        left++;
    }

    // If the array is already sorted, return 0
    if (left == n) {
        return 0;
    }

    // Find the rightmost element that is not in its correct position
    int right = n - 1;
    while (right >= 0 && nums[right] == sorted_nums[right]) {
        right--;
    }

    // Return the length of the unsorted subarray
    return right - left + 1;
}

int main() {
    vector<int> nums1 = {2, 6, 4, 8, 10, 9, 15};
    cout << "Input: [2, 6, 4, 8, 10, 9, 15]\nOutput: " << findUnsortedSubarrayLength(nums1) << endl;

    vector<int> nums2 = {1, 2, 3, 4};
    cout << "Input: [1, 2, 3, 4]\nOutput: " << findUnsortedSubarrayLength(nums2) << endl;

    return 0;
}