/* Task 3: Bank Account Transactions 
Asad is managing his bank account and intends to carry out two transactions. Initially, he plans to withdraw Rs. 2000 in cash, 
followed by a deposit of Rs. 10,000 into his account. Your task is to create a simple C++ program to facilitate these transactions. 
Display the account balance after each transaction. Write a C++ program to realize the specified scenario.
 */
#include <iostream>
using namespace std;

int main() {
    int balance;
    int withdrawAmount = 2000;
    int depositAmount  = 10000;

    cout << "\nEnter account balance: "<<endl;
    cin >> balance;

    balance = balance - withdrawAmount;
    cout << "After withdrawing " << withdrawAmount<< ", balance = " << balance << endl;

    balance = balance + depositAmount;
    cout << "After depositing " << depositAmount<< ", balance = " << balance << endl;

    return 0;
}
