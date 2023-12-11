#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int romanToInt(std::string s) {
        char n = s[0];
        int i = 0;
        int sum = 0;
        while (n != '\0') {
            switch (n) {
                case 'I':
                    if (s[i + 1] == 'V') {
                        sum += 4;
                        i++;
                    }
                    else if (s[i + 1] == 'X') {
                        sum += 9;
                        i++;
                    }
                    else {
                        sum += 1;
                    }
                    break;
                case 'V':
                    sum += 5;
                    break;
                case 'X':
                    if (s[i + 1] == 'L') {
                        sum += 40;
                        i++;
                    }
                    else if (s[i + 1] == 'C') {
                        sum += 90;
                        i++;
                    }
                    else {
                        sum += 10;
                    }
                    break;
                case 'L':
                    sum += 50;
                    break;
                case 'C':
                    if (s[i + 1] == 'D') {
                        sum += 400;
                        i++;
                    }
                    else if (s[i + 1] == 'M') {
                        sum += 900;
                        i++;
                    }
                    else {
                        sum += 100;
                    }
                    break;
                case 'D':
                    sum += 500;
                    break;
                case 'M':
                    sum += 1000;
                    break;
                default:
                    sum += 0;
            }
            i++;
            n = s[i];
        }
        return sum;
    }
};

int main() {
    Solution solution;
    string input;
    cout << "Enter a Roman numeral: ";
    cin >> input;
    int result = solution.romanToInt(input);
    cout << "Integer equivalent: " << result << endl;
    return 0;
}
