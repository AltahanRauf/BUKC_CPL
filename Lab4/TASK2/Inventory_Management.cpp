#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number of different items in stock: ";
    cin>>n;
    double total = 0, price;
    int q;
    for (int i = 1; i <= n; i++) {
        cout<<"Enter the price per unit for item "<<i<<":";
        cin>>price;
        cout<<"Enter the quantity in stock for item "<<i<< ":";
        cin>>q;
        total += price*q;
    }
    cout<<"Total value of the inventory: PKR "<<total<<" Rupees only."<<endl;
    return 0;
}
