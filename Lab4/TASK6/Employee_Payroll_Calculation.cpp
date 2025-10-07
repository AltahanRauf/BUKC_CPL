#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"\tWelcome to the Employee Payroll Calculator"<<endl<<endl;
    cout<<"\tEnter the number of employees:";
    cin>>n;
    double wage,hours,pay;
    cout<<endl;
    for(int i=1;i<=n;i++){
        cout<<"Employee "<<i<<":"<<endl;
        cout<<"Enter hourly wage:";
        cin>>wage;
        cout<<"Enter hours worked:";
        cin>>hours;
        pay=wage*hours;
        cout<<endl;
        cout<<"\tEmployee "<<i<<": PKR: "<<pay<<endl;
        cout<<endl;
    }
    return 0;
}
