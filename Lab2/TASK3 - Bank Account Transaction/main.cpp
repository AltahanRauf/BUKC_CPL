/* Task 3: Bank Account Transactions */
#include <iostream>
using namespace std;

int main() {
    int balance;
    int withdrawAmount = 2000;
    int depositAmount  = 10000;

    cout << "Enter starting account balance: ";
    cin >> balance;

    balance = balance - withdrawAmount;
    cout << "After withdrawing " << withdrawAmount
         << ", balance = " << balance << endl;

    balance = balance + depositAmount;
    cout << "After depositing " << depositAmount
         << ", balance = " << balance << endl;

    return 0;
}
