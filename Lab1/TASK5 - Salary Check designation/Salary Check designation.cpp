#include <iostream>
using namespace std;

int main() {

    int salary;


    cout << "\nEnter salary: ";
    cin >> salary;

  
    if (salary == 200000)
        cout << "\nManager's Salary" << endl;
    else if (salary == 150000)
        cout << "\nSupervisor Salary" << endl;
    else if (salary == 80000)
        cout << "\nTechnician Salary" << endl;
    else
        cout << "\nUnknown Designation Please enter valid salary" << endl;

    return 0;
}
