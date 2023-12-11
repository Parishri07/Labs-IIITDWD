#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Armstrong numbers between 1 and 1000:" << endl;
    
    for (int num = 1; num <= 1000; ++num) {
        int originalNum = num;
        int ctr = 0;
        int result = 0;

        while (originalNum != 0) {
            originalNum /= 10;
            ++ctr;
        }

        originalNum = num;
        while (originalNum != 0) {
            int remainder = originalNum % 10;
            result += pow(remainder, ctr);
            originalNum /= 10;
        }

        if (result == num) {
            cout << num << " ";
        }
    }

    return 0;
}
