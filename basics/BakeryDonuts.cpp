#include <iostream>
using namespace std;

int main()
{
    //initial stock
    int donuts = 25;
    cout << "Number of donuts: " << donuts << endl;

    cout << "Enter the number of donuts you want to eat: ";
    int eaten;
    cin >> eaten;

    donuts -= eaten;
    cout << "Donuts left: " << donuts << endl;

    cout << "Enter the number of special donuts you want to add: ";
    int special_donuts;
    cin >> special_donuts;

    donuts += special_donuts;
    cout << "Total donuts: " << donuts << endl;

    cout << "Enter the number of donuts you want to give away: ";
    int given_away;
    cin >> given_away;
    donuts -= given_away;
    cout << "Donuts left after giving away: " << donuts << endl;

    //final stock
    cout << "Final number of donuts: " << donuts << endl;
    return 0;
}