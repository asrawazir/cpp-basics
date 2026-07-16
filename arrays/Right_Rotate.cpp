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

    // Right rotate the array by d positions
    d = d % n; // Handle cases where d is greater than n
    int temp[d];

    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[n - d + i];
    }
    return 0;
}