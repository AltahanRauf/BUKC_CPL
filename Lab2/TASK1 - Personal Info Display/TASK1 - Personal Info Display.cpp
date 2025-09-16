/*    TASK1
Write a C++ program that takes the following information as input from the user:
1.	Name 
2.	Age.
3.	Height (height in feet).
4.	A short description about themselves (a multi-line string).
*/
#include <iostream>
#include <string>

using namespace std;
int main() {

	string name;
	int age;
	float height;
	string desription;
             // Taking Input from the End-User
	cout << "\nEnter your name :  " << endl;
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