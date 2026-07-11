#include <iostream>
using namespace std;

int main()
{
    cout << "--- Right-Aligned Increasing Triangle ---" << endl;

    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}