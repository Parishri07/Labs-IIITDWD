#include <iostream>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        int i = s.length() - 1; 
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        while (i >= 0 && s[i] != ' ') {
            length++;
            i--;
        }

        return length;
    }
};

int main() {
    Solution solution;
    string input;
    
    cout << "Enter a string: ";
    cin >> input;

    int result = solution.lengthOfLastWord(input);
    
    cout << "Length of the last word: " << result << endl;

    return 0;
}
