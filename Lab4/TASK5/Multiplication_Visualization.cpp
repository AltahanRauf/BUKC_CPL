#include<iostream>
using namespace std;
int main(){
    int num,i=1;
    cout<<"Enter a number to print its multiplication table:";
    cin>>num;
    do{
        cout<<num<<" x "<<i<<" = "<<num*i<<endl;
        i++;
    }while(i<=10);
    return 0;
}
