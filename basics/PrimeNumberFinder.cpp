#include <iostream>
using namespace std;

int main()
{
    cout << "--- Prime Number Finder ---" << endl;

    cout << "Enter the starting number: ";
    int start;
    cin >> start;

    cout << "Enter the ending number: ";
    int end;
    cin >> end;

    if (start > end) {
        cout << "Starting number should be less than or equal to ending number." << endl;
        return 1;
    }

    for(int num = start; num <= end; num++) {
        bool isPrime = true;

        if (num <= 1) {
            isPrime = false;
        } 
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            std::cout << num << " ";
        }
    }
    return 0;
}