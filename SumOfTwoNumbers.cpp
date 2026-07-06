#include <iostream>
using namespace std;

int main()
{
    cout << "---SUM OF TWO NUMBERS---" << endl;

    double num1;
    cout << "Enter first number: ";
    cin >> num1;

    double num2;
    cout << "Enter second number: ";
    cin >> num2;

    double sum = num1 + num2;
    cout << "Sum: " << sum << endl;

    return 0;
}