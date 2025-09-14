/* 
 Task 5: Excel Laboratories Receipt Generator
 - Input: service name, quantity, fee per unit
 - Calculate: total, subtotal, tax (5%), grand total
 - Output: Receipt in simple format
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
    cout << "Enter service description: ";
    getline(cin, service);

    cout << "Enter quantity: ";
    cin >> qty;

    cout << "Enter fee per unit: ";
    cin >> fee;

    // Calculations
    total = qty * fee;
    tax = total * 0.05;         // 5% tax
    grandTotal = total + tax;

    // Output - Receipt
    cout << "---------------------------------------------\n";
    cout << "Service        | Quantity | Fee   | Total\n";
    cout << service << " | " << qty << "        | " << fee << "   | " << total << "\n";
    cout << "---------------------------------------------\n";
    cout << "Subtotal       | " << total << "\n";
    cout << "Tax (5%)       | " << tax << "\n";
    cout << "Grand Total    | " << grandTotal << "\n";
    cout << "---------------------------------------------\n";

    return 0;
}
