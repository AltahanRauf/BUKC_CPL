/* Task 2: World Travel Planner 
Assume that you are developing for a World Travel Planner program in C++ that caters to globetrotters. The program should assist users 
in planning their international travels by allowing them to convert distances from miles to kilometers. Users will input the distance in 
miles, and the program will output the converted distance in kilometers, considering the international metric system commonly used in 
many countries.
1 mile = 1.60934 kilometers
 */
#include <iostream>
using namespace std;

int main() {
    float miles, km;

    cout<<"\n-----------Welcome to World Travle Planner-----------";
    cout<<"Enter Distance In Miles: ";
    cin >> miles;

    // 1 mile = 1.60934 km
    km = miles *(1.60934); 
    cout<<"\n -----covered distance------"<<endl;
    cout << miles << " miles is about " << km << " kilometers.\n";
    return 0;
}
