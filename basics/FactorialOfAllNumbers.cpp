#include <iostream>
using namespace std;

int main()
{
    cout << "--- Factorial Table ---" << endl;

    cout << "Enter a positive integer: ";
    int num;
    cin >> num;

    if (num <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    for (int i = 1; i <= num; i++) {
        int factorial = 1;
        for (int j = 1; j <= i; j++) {
            factorial *= j;
        }
        cout << "Factorial of " << i << " is: " << factorial << endl;
    }
    
    return 0;
}