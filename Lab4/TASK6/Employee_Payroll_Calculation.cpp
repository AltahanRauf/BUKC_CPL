#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of employees:";
    cin>>n;
    double wage,hours,pay;
    for(int i=1;i<=n;i++){
        cout<<"Enter hourly wage for employee "<<i<<":";
        cin>>wage;
        cout<<"Enter hours worked for employee "<<i<<":";
        cin>>hours;
        pay=wage*hours;
        cout<<"Weekly pay for employee "<<i<<":$"<<pay<<endl;
    }
    return 0;
}
