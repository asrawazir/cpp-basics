#include <iostream>
using namespace std;

int main()
{
    int numbers[5] = {1, 2, 3, 4, 5};

    int length = sizeof(numbers) / sizeof(numbers[0]); 

    cout << "Length of the array: " << length << endl;
    return 0;
}