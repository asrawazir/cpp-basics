#include <iostream>
using namespace std;

int main()
{
    cout << "--- Bill Splitter ---" << endl;

    double totalBill;
    cout << "Enter the total bill amount: ";
    cin >> totalBill;

    int numberOfPeople;
    cout << "Enter the number of people to split the bill: ";
    cin >> numberOfPeople;

    double amountPerPerson = totalBill / numberOfPeople;
    cout << "Each person should pay: Rs." << amountPerPerson << endl;
    return 0;
}