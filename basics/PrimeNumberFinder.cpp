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
    return 0;
}