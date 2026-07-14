#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the element to count its occurrences: ";
    cin >> target;

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            count++;
        }
    }

    cout << "The element " << target << " occurs " << count << " times in the array." << endl;
    
    return 0;
}