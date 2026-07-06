#include <iostream>
using namespace std;

int main()
{
    cout << "--- Discount Eligibility Checker ---" << endl;

    double totalBill;
    cout << "Enter the total bill amount: ";
    cin >> totalBill;

    double minimumDiscountAmount = 1000.0; // Minimum bill amount for discount eligibility
    double discountRate = 0.10; // 10% discount

    bool pastPurchase;
    cout << "Have you made a purchase in the last 30 days? (1 = Yes, 0 = No): ";
    cin >> pastPurchase;

    bool isEligibleForDiscount = (totalBill >= minimumDiscountAmount) || pastPurchase;

    cout << "Qualifies for special discount? (1 = Yes, 0 = No): " << isEligibleForDiscount << endl;

    double amountAfterDiscount = totalBill - (totalBill * discountRate);
    cout << "Amount after discount (if eligible): Rs." << amountAfterDiscount << endl;

    return 0;
}