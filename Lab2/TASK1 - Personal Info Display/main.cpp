#include <iostream>
#include <string>

using namespace std;
int main() {

	string name;
	int age;
	float height;
	string desription;
             // Taking Input from the End-User
	cout << "Enter your name :  " << endl;
	getline(cin, name);
	cout << "Enter your age :  " << endl;
	cin >> age;
	cout << "Enter your height (in feet) :  " << endl;
	cin >> height;
	cin.ignore(); // To ignore the newline character
	cout << "Enter a brief description about yourself :  " << endl;
	getline(cin, desription);
            // Output User's Info, in well formatted form
	cout << "------------------------------------" << endl;
	cout << "------------ Personal Info ---------" << endl;
	cout << "------------------------------------" << endl;
	cout << "\t \n Name: " << name << endl;
	cout << "\t Age: " << age << " years" << endl;
	cout << "\t Height: " << height << " feet" << endl;
	cout << "\t About Me: " << desription << endl;
	cout << "\n----------------------------------" << endl;

	return 0;
}