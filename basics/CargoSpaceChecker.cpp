#include <iostream>
using namespace std;

int main()
{
    cout << "---Cargo Space Checker---" << endl;

    int maxCargoSpace = 1000; // Maximum cargo space in cubic feet
    cout << "Maximum cargo space: " << maxCargoSpace << " cubic feet" << endl;

    int sum = 0;
    int packageCount = 0;
    while (sum < maxCargoSpace)
    {
        int cargoItem;
        cout << "Enter the size of the cargo item (in cubic feet): ";
        cin >> cargoItem;
        if (cargoItem <= 0)
        {
            cout << "Invalid cargo item size. Please enter a positive value." << endl;
            continue;
        }
        sum += cargoItem;

        if (sum > maxCargoSpace)
        {
            cout << "Warning: Cargo space exceeded!" << endl;
            sum -= cargoItem;
            break;
        }
        packageCount++;
    }
    cout << "Details:" << endl;
    cout << "Total cargo space used: " << sum << " cubic feet" << endl;
    cout << "Number of packages: " << packageCount << endl;
    cout << "Remaining cargo space: " << (maxCargoSpace - sum) << " cubic feet" << endl;
    return 0;
}