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

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            count++;
        }
    }
    cout << "The number of negative elements in the array is: " << count << endl;

    return 0;
}