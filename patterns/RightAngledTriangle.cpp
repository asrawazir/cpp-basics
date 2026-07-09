#include <iostream>
using namespace std;

int main()
{
    cout << "--- Right Angled Star Triangle ---" << endl;

    cout << "Enter the number of rows: ";
    int rows;
    cin >> rows;

    for(int i = 0; i < rows; i++){
        for(int j =0; j <=i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}