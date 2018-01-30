#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleTitle("Calculator");
    system("color 0A");

    float num1, num2, result;
    int choice;
    char yn;

    do
    {
        system("cls");

        cout << "Input first number: " << endl;
        cin >> num1;

        cout << "Input second number: " << endl;
        cin >> num2;

        cout << "Select an operation: " << endl;
        cout << "1: Addition" << endl;
        cout << "2: Subtraction" << endl;
        cout << "3: Multiplication" << endl;
        cout << "4: Division" << endl;

        cin >> choice;
        switch(choice)
        {
        case 1:
            result = num1 + num2;
            break;
        case 2:
            result = num1 - num2;
            break;
        case 3:
            result = num1 * num2;
            break;
        case 4:
            result = num1 / num2;
            break;
        default:
            cout << "deadass" << endl;
            break;
        }

        cout << "The result is: " << result << endl << endl;

        cout << "Enter y to repeat: ";
        cin >> yn;
    } while(yn == 'y');

    return 0;
}
