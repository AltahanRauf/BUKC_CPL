/* Task 2: Miles to Kilometers */
#include <iostream>
using namespace std;

int main() {
    float miles, km;

    cout<<"-----------Welcome to World Travle Planner-----------";
    cout<<"Enter Distance In Miles: ";
    cin >> miles;

    // 1 mile = 1.60934 km
    km = miles *(1.60934); 
    cout<<"\n -----covered distance------"<<endl;
    cout << miles << " miles is about " << km << " kilometers.\n";
    return 0;
}
