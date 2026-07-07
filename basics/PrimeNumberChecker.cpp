#include <iostream>
using namespace std;

int main()
{
    cout << "--- Prime Number Checker ---" << endl;

    cout << "Enter a positive integer: ";
    int num;
    cin >> num;

    bool isPrime = true;
    if (num <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i <= num - 1; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}