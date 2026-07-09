#include <iostream>
using namespace std;

int main()
{
    cout << "--- Inverted Pyramid Pattern ---" << endl;

    cout << "Enter the number of rows: ";
    int rows;
    cin >> rows;

    for(int i = rows; i >= 1; i--){
        for(int j = 1; j <= rows - i; j++){
            cout << " ";
        }
        for(int k = 1; k <= (2 * i - 1); k++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}