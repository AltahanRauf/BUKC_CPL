/* 
 Excel Laboratories is implementing a new system for generating bills at its lab. As a software developer, 
 you have been assigned the task of creating a program that will help generate detailed receipts for the patients. 
 The Lab provides various medical services, and the billing system needs to be able to handle different types of 
 services with appropriate fees. 

The program should prompt the user to enter the following information for each medical service provided at the clinic:

Service description (e.g., MRI,CT scan, blood test, X-ray)
Quantity (for services like blood tests or X-rays)
Service fee per unit

Calculate the total cost for each medical service (quantity * service fee per unit). Also Apply 5% tax on each bill. 
Print Receipt which display all the information.

*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string service;   // service name (e.g. Blood Test)
    int qty;          // number of services
    int fee;          // fee per unit
    int total;        // qty * fee
    float tax;        // 5% tax
    float grandTotal; // total + tax

    // Input
    cout << "\nEnter service description: ";
    getline(cin, service);

    cout << "\nEnter quantity: ";
    cin >> qty;

    cout << "\nEnter fee per unit: ";
    cin >> fee;

    // Calculations
    total = qty * fee;
    tax = total * 0.05;         // 5% tax
    grandTotal = total + tax;

    // Output - Receipt
    cout << "\n---------------------------------------------\n";
    cout << "Service        | Quantity | Fee   | Total\n";
    cout << service << " | " << qty << "        | " << fee << "   | " << total << "\n";
    cout << "---------------------------------------------\n";
    cout << "Subtotal       | " << total << "\n";
    cout << "Tax (5%)       | " << tax << "\n";
    cout << "Grand Total    | " << grandTotal << "\n";
    cout << "---------------------------------------------\n";

    return 0;
}
