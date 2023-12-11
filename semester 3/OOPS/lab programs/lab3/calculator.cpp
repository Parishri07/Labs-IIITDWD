#include <iostream>
using namespace std;

int main()
{
    int num1, num2, result;
    char op, ctr = 'Y';

    while (ctr == 'Y')
    {
        cout << "Enter two numbers(first number is greater): ";
        cin >> num1 >> num2;

        cout << "Enter operator: ";
        cin >> op;

        switch (op)
        {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;

        default:
            result = 0;
            break;
        }

        cout << "Result is: " << result << endl;

        cout << "Do you wish to do any other calculation(Y or N): ";
        cin >> ctr;
    }
}