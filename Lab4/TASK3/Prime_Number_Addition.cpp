#include<iostream>
using namespace std;
int main(){
    int num,sum=0;
    cout<<"Please enter 10 integers, one at a time:"<<endl;
    for(int i=1;i<=10;i++){
        cout<<"Enter integer "<<i<<":";
        cin>>num;
        bool prime=true;
        if(num<=1) prime=false;
        for(int j=2;j*j<=num;j++){
            if(num%j==0){
                prime=false;
                break;
            }
        }
        if(prime){
            cout<<num<<" ";
            sum+=num;
        }
    }
    cout<<endl<<"The sum of the prime numbers is:"<<sum<<endl;
    return 0;
}
