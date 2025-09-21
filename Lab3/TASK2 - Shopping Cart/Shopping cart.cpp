#include <iostream>
using namespace std;

int main() {
    double amount, discountedAmount;

    cout << "Enter total purchase amount: ";
    cin >> amount;

    if (amount > 15000) {
        discountedAmount = amount - (amount * 0.10);  // apply 10% discount
        cout << "Congratulations! You got a 10% discount." << endl;
        cout << "Discounted amount: " << discountedAmount << " Rupees" << endl;
    }
    else {
        discountedAmount = amount;  // no discount
        cout << "No discount applied." << endl;
        cout << "Amount to pay: " << discountedAmount << " Rupees" << endl;
    }

    return 0;
}
