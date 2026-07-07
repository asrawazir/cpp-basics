#include <iostream>
using namespace std;

int main()
{
    cout << "--- Calculator ---" << endl;

    cout << "Enter first number: ";
    double num1;
    cin >> num1;

    cout << "Enter second number: ";
    double num2;
    cin >> num2;

    cout << "Select operations (1-4): ";
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;

    cout << "Enter your choice: ";
    int choice;
    cin >> choice;

    double result;

    if(choice == 1)
    {
        result = num1 + num2;
        cout << "Result: " << result << endl;
    }
    else if(choice == 2)
    {
        result = num1 - num2;
        cout << "Result: " << result << endl;
    }
    else if(choice == 3)
    {
        result = num1 * num2;
        cout << "Result: " << result << endl;
    }
    else if(choice == 4)
    {
        if(num2 != 0)
        {
            result = num1 / num2;
            cout << "Result: " << result << endl;
        }
        else
        {
            cout << "Error: Division by zero is not allowed." << endl;
        }
    }
    else
    {
        cout << "Invalid choice." << endl;
    }
    return 0;
}