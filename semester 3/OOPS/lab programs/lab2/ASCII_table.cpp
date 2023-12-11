#include <iostream>
using namespace std;

int main(){
    cout<<"ASCII Code "<< "Character ";
     for (int i = 0; i <= 127; ++i) {
        char character = i;  // Assign the integer value to a char variable
        cout <<i<<"            "<<character<< "\n";
    }
    return 0;
}