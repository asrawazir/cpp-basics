#include <iostream>
using namespace std;

int main()
{
    cout << "--- Ordered Pair Printer ---" << endl;

    cout << "Enter the range of x: ";
    int xRange;
    cin >> xRange;

    cout << "Enter the range of y: ";
    int yRange;
    cin >> yRange;

    for(int i = 1; i <= xRange; i++){
        for(int j = 1; j <= yRange; j++){
            cout << "(" << i << ", " << j << ") ";
        }
        cout << endl;
    }
    return 0;
}