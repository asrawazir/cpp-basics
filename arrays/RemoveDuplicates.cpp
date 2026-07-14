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
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        bool isDuplicate = false;
        for (int k = 0; k < j; k++)
        {
            if (arr[i] == newArr[k])
            {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate)
        {
            newArr[j++] = arr[i];
        }
    }
    return 0;
}