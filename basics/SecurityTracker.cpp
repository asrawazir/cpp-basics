#include <iostream>
using namespace std;

int main() 
{
    cout << "--- Security Status Tracker ---" << endl;
    
    cout << "Is the front door securely locked? (1 for Yes, 0 for No): ";
    bool doorLocked;
    cin >> doorLocked;
    
    bool isSecure = !doorLocked;

    cout << "Is the house secure? (1 for Yes, 0 for No): " << isSecure << endl;
    return 0;
}