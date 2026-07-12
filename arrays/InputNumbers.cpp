#include <iostream>
using namespace std;

int main()
{
    int numbers[5];

    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> numbers[i];
    }

    cout << "The numbers you entered are: ";
    for (int i = 0; i < 5; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}