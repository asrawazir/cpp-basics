#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a single character: ";
    char c;
    cin >> c;

    cout << "ASCII value of " << c << " is " << int(c) << endl;

    cout << "Enter a single digit to shift by: ";
    int d;
    cin >> d;

    int newNum = (int)c + d;

    cout << "The new character after shifting is " << (char)newNum << endl;
    return 0;
}