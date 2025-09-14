#include <iostream>
using namespace std;

int main() {

    int salary;


    cout << "Enter salary: ";
    cin >> salary;

  
    if (salary == 200000)
        cout << "Manager" << endl;
    else if (salary == 150000)
        cout << "Supervisor" << endl;
    else if (salary == 80000)
        cout << "Technician" << endl;
    else
        cout << "Unknown Designation" << endl;

    return 0;
}
