#include <iostream>
using namespace std;

int main()
{
    int start = 1, end = 1000;
    cout << "Perfect cubes in the given range:\n";
    for (int num = start; num <= end; num++) {
        for (int cubeRoot = 1; cubeRoot * cubeRoot * cubeRoot <= num; cubeRoot++) {
            if (cubeRoot * cubeRoot * cubeRoot == num) {
                cout<<num<<"  ";
                break;
            }
        }
    }
    return 0;
}
