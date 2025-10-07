#include<iostream>
using namespace std;
int main() {
	int choice, size;
	cout << "Welcome to the Star Pattern Generator!" << endl;
	cout << "Choose the type of star pattern:" << endl;
	cout << "1. Hollow Stars" << endl;
	cout << "2. Filled Stars" << endl;
	cout << "3. Pyramid Stars" << endl;
	cout << "Enter your choice: ";
	cin >> choice;
	cout << "Enter the size of the star pattern: ";
	cin >> size;
	cout << endl;
	if (choice == 1) {
		cout << "Hollow Stars Pattern:" << endl;
		for (int i = 1; i <= size; i++) {
			for (int j = 1; j <= i; j++) {
				if (j == 1 || j == i || i == size) {
					cout << "*";
				}
				else {
					cout << " ";
				}
			}
			cout << endl;
		}
	}
	if (choice == 2) {
		cout << "Filled Stars Pattern:" << endl;
		for (int i = 1; i <= size; i++) {
			for (int j = 1; j <= i; j++) {
				cout << "*";
			}
			cout << endl;
		}
	}
	if (choice == 3) {
		cout << "Pyramid Stars Pattern:" << endl;
		for (int i = 1; i <= size; i++) {
			for (int j = i; j < size; j++) {
				cout << " ";
			}
			for (int k = 1; k <= 2 * i - 1; k++) {
				cout << "*";
			}
			cout << endl;
		}
	}
	if (choice != 1 && choice != 2 && choice != 3) {
		cout << "Invalid choice!" << endl;
	}
	return 0;
}
