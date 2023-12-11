#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> arr;
        arr.push_back({1});

        for (int i = 1; i < rowIndex + 1; i++) {
            vector<int> row;
            row.push_back(1);

            for (int j = 1; j < i; j++) {
                row.push_back(arr[i - 1][j - 1] + arr[i - 1][j]);
            }

            row.push_back(1);

            arr.push_back(row);
        }
        return arr[rowIndex];
    }
};

int main() {
    Solution solution;
    
    int rowIndex1 = 3;
    vector<int> result1 = solution.getRow(rowIndex1);
    cout << "Row " << rowIndex1 << ": ";
    for (int num : result1) {
        cout << num << " ";
    }
    cout << endl;

    int rowIndex2 = 5;
    vector<int> result2 = solution.getRow(rowIndex2);
    cout << "Row " << rowIndex2 << ": ";
    for (int num : result2) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
