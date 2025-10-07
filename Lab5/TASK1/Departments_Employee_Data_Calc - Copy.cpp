#include<iostream>
#include<string>
using namespace std;
int main() {
	int d;
	cout << "Enter number of departments:";
	cin >> d;
	cin.ignore();
	for (int i = 1; i <= d; i++) {
		cout << "-----------------------------------------" << endl;
		cout << "Department " << i << " details:" << endl;
		cout << "-----------------------------------------" << endl;
		int totalSalary = 0;
		for (int j = 1; j <= 10; j++) {
			string name, designation;
			int salary;
			cout << "\nEmployee:" << j << endl;
			cout << "Enter Name:";
			getline(cin, name);
			cout << "Enter Salary:";
			cin >> salary;
			cin.ignore();
			cout << "Enter Designation:";
			getline(cin, designation);
			cout << "\nEmployee " << j << " Info:" << endl;
			cout << "Name:" << name << endl;
			cout << "Salary:" << salary << " PKR" << endl;
			cout << "Designation:" << designation << endl;
			totalSalary += salary;
		}
		cout << "\nTotal salary for Department " << i << "=" << totalSalary << " PKR\n" << endl;
	}
	return 0;
}
