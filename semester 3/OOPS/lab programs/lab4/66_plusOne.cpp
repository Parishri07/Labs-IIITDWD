#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
        vector<int> newDigits(n + 1);
        newDigits[0] = 1;
        return newDigits;
    }
};

int main() {
    Solution solution;
    
    vector<int> digits1 = {1, 2, 3};
    vector<int> result1 = solution.plusOne(digits1);
    for (int digit : result1) {
        cout << digit << " ";
    }
    cout << endl;

    vector<int> digits2 = {9, 9, 9};
    vector<int> result2 = solution.plusOne(digits2);
    for (int digit : result2) {
        cout << digit << " ";
    }
    cout << endl;

    return 0;
}
