#include <iostream>
using namespace std;

int main()
{
    int numbers[] = {10, 20, 30, 40, 50};
    int length = sizeof(numbers) / sizeof(numbers[0]);
    
    cout << "Array in reverse: ";
    for (int i = length - 1; i >= 0; i--) 
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
}