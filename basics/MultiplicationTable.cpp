#include <iostream>
using namespace std;

int main()
{
    cout << "--- Multiplication Table ---" << endl;

    cout << "Enter a positive integer: ";
    int num;
    cin >> num;

    if (num <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    cout << "Multiplication Table for " << num << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}