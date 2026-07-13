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
    int searchNum;
    cout << "Enter the number to search for: ";
    cin >> searchNum;

    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == searchNum)
        {
            found = true;
            break;
        }
    }

    return 0;
}