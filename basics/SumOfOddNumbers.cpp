#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the number of odd numbers to sum: ";
    int n;
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i += 2) {
        sum += i;
    }

    cout << "The sum of the first " << n << " odd numbers is: " << sum << endl;
    return 0;
}