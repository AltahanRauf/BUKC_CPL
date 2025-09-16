#include <iostream>
using namespace std;

int main() {
    
    float grade1, grade2, grade3, avg;


    cout << "\nEnter Grade 1: ";
    cin >> grade1;
    cout << "\nEnter Grade 2: ";
    cin >> grade2;
    cout << "\nEnter Grade 3: ";
    cin >> grade3;

    
    avg = (grade1 + grade2 + grade3) / 3;

   
    cout << "Average Grade = " << avg << endl;

    return 0;
}
