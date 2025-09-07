#include <iostream>
using namespace std;

int main() {
    
    float grade1, grade2, grade3, avg;


    cout << "Enter Grade 1: ";
    cin >> grade1;
    cout << "Enter Grade 2: ";
    cin >> grade2;
    cout << "Enter Grade 3: ";
    cin >> grade3;

    
    avg = (grade1 + grade2 + grade3) / 3;

   
    cout << "Average Grade = " << avg << endl;

    return 0;
}
