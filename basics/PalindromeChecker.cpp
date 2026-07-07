#include <iostream>
using namespace std;

int main()
{
    cout << "--- Palindrome Checker ---" << endl;

    int number;
    cout << "Enter a number: ";
    cin >> number;

    int originalNumber = number;
    int reversedNumber = 0;

    while (number > 0) {
        reversedNumber = reversedNumber * 10 + number % 10;
        number /= 10;
    }

    if (originalNumber == reversedNumber) {
        cout << originalNumber << " is a palindrome." << endl;
    } else {
        cout << originalNumber << " is not a palindrome." << endl;
    }

    return 0;
}