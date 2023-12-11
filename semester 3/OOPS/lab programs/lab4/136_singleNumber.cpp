//The XOR operator is used to find the single number in an array because it cancels out duplicate elements. When you XOR all the elements together, duplicate elements cancel each other out, leaving only the single number.

#include <iostream>
#include <vector>
using namespace 

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for (int num : nums) {
            result ^= num;
        }
        return result;
    }
};

int main() {
    vector<int> nums = {2, 2, 1, 1, 5};

    Solution solution;

    int single = solution.singleNumber(nums);

    cout << "The single number is: " << single << endl;

    return 0;
}
