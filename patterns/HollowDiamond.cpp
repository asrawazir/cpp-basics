#include <iostream>
using namespace std;

int main()
{
    cout << "-- Hollow Diamond Pattern --" << endl;

    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            if (k == 1 || k == (2 * i - 1))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    for (int i = rows - 1; i >= 1; i--)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            if (k == 1 || k == (2 * i - 1))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}