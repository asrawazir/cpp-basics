#include <iostream>
using namespace std;

int main() {
    int correctPin = 1234;
    int enteredPin = 0;
    int attempts = 0;
    int maxAttempts = 3;

    do {
        cout << "Enter your PIN: ";
        cin >> enteredPin;

        if (enteredPin == correctPin) {
            cout << "Access granted." << endl;
            break;
        } else {
            attempts++;
            cout << "Incorrect PIN. Attempts remaining: " << (maxAttempts - attempts) << endl;
        }
    } while (attempts < maxAttempts);
    
    return 0;
}