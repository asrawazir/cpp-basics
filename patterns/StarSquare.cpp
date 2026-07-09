#include <iostream>
using namespace std;

int main()
{
    cout << "--- Star Square ---" << endl;

    cout << "Enter the number of rows: ";
    int rows;
    cin >> rows;

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < rows; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}