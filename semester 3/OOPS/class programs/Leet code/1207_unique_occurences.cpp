#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(std::vector<int>& arr) {
        vector<int> newarr;
        vector<int> occr;
        newarr.push_back(arr[0]);
        for(int n = 0; n < arr.size(); n++) {
            int m;
            for(m = 0; m < newarr.size(); m++) {
                if(arr[n] == newarr[m])
                    break;
            }
            if(m == newarr.size())
                newarr.push_back(arr[n]);
        }

        for(int n = 0; n < newarr.size(); n++) {
            int ctr = 0;
            for(int m = 0; m < arr.size(); m++) {
                if(newarr[n] == arr[m])
                    ctr++;
            }
            occr.push_back(ctr);
        }

        for(int i = 0; i < occr.size(); i++) {
            for(int j = i + 1; j < occr.size(); j++) {
                if(occr[i] == occr[j])
                    return false;
            }
        }

        return true;
    }
};

int main() {
    Solution solution;
    vector<int> arr = {1, 2, 2, 1, 1, 3};

    bool result = solution.uniqueOccurrences(arr);

    if (result) {
        cout << "Occurrences are unique." << endl;
    } else {
        cout << "Occurrences are not unique." << endl;
    }

    return 0;
}
