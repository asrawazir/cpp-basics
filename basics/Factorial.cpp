#include <iostream>
using namespace std;

int main()
{
    cout << "--- Factorial ---" << endl;

    cout << "Enter a positive integer: ";
    int num;
    cin >> num;

    if (num < 0) {
        cout << "Please enter a non-negative integer." << endl;
        return 1;
    }

    int factorial = 1;
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }
    cout << "Factorial of " << num << " is: " << factorial << endl;
    return 0;
}