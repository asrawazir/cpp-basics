#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int d;
    cout << "Enter the number of rotations: ";
    cin >> d;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Left rotate the array by d positions
    d = d % n; // Handle cases where d is greater than n
    int temp[d];

    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }

    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }
    
    for (int i = 0; i < d; i++)
    {
        arr[n - d + i] = temp[i];
    }

    cout << "Array after left rotation: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}