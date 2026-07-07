#include <iostream>
using namespace std;

int main()
{
    char c;
    cout << "Enter a character: ";
    cin >> c;

    if(c >= 'A' && c <= 'Z') {
        cout << c << " is an uppercase letter." << endl;
    } else if(c >= 'a' && c <= 'z') {
        cout << c << " is a lowercase letter." << endl;
    } else {
        cout << c << " is not an alphabetic character." << endl;
    }
    
    return 0;
}