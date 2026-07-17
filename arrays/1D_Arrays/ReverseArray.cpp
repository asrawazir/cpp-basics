#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int newArr[n];
    for (int i = 0; i < n; i++)
    {
        newArr[i] = arr[n - 1 - i];
    }

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++)
    {
        cout << newArr[i] << " ";
    }
    cout << endl;

    return 0;
}