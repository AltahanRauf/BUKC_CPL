#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number to see its multiplication table: ";
    cin>>num;
    cout<<"Multiplication table for "<<num<<":"<<endl;
    int i=1;
    do{
        cout<<"\t"<<num<<" * "<<i<<" = "<<num*i<<endl;
        i++;
    }while(i<=10);
    return 0;
}
