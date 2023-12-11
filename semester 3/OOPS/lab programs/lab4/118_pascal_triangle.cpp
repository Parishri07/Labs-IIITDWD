#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
   vector<vector<int>> generate(int numRows) {
       vector<vector<int>> arr;
        arr.push_back({1});

        for(int i = 1; i < numRows; i++){
           vector<int> row;
            row.push_back(1);

            for(int j = 1; j < i; j++){
                row.push_back(arr[i-1][j-1] + arr[i-1][j]);
            }

            row.push_back(1);
            arr.push_back(row);
        }
        return arr;
    }
};

int main() {
    Solution solution;
    int numRows;

   cout << "Enter the number of rows for Pascal's triangle: ";
   cin >> numRows;

   vector<vector<int>> pascalsTriangle = solution.generate(numRows);

    for (const   vector<int>& row : pascalsTriangle) {
        for (int num : row) {
           cout << num << " ";
        }
       cout <<   endl;
    }

    return 0;
}
