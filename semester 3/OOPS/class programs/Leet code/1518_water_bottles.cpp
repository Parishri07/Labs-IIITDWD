#include <iostream>
using namespace std;

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ctr = numBottles / numExchange;
        int sum = numBottles + ctr;
        int rem = numBottles % numExchange;
        while (ctr >= 1) {
            ctr += rem;
            rem = ctr % numExchange;
            ctr = ctr / numExchange;
            sum += ctr;
        }
        return sum;
    }
};

int main() {
    Solution solution;
    int numBottles, numExchange;

    numBottles = 9;
    numExchange = 3;
    int result1 = solution.numWaterBottles(numBottles, numExchange);
    cout << "Result 1: " << result1 << endl; 

    numBottles = 15;
    numExchange = 4;
    int result2 = solution.numWaterBottles(numBottles, numExchange);
    cout << "Result 2: " << result2 << endl; 

    return 0;
}
