#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "welcome to pattern generator!" << endl;
	cout << "enter size of pattern: ";
	cin >> n;
	cout << endl;
	cout << "\tinverted right triangle : \n" << endl;
	for (int i = n; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	cout << "\thollow square : \n" << endl;
	for (int j = 1; j <= n; j++) {
		for (int k = 1; k <= n; k++) {
			if (j == 1 || j == n || k == 1 || k == n) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
	cout << endl;
	cout << "\tcombo pattern : \n" << endl;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		for (int j = i; j < n; j++) {
			cout << " ";
		}
		for (int k = 1; k <= n; k++) {
			if (i == 1 || i == n || k == 1 || k == n) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
