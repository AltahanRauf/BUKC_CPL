#include<iostream>
#include<string>
using namespace std;
int main() {
	int days = 5, periods = 6;
	string subj;
	for (int i = 1; i <= days; i++) {
		cout << "Enter subjects for Day " << i << ":\n";
		for (int j = 1; j <= periods; j++) {
			cout << " Period " << j << ": ";
			getline(cin, subj);
			if (subj.size() == 0)getline(cin, subj);
			cout << " [Saved] Day " << i << ", Period " << j << ": " << subj << "\n";
		}
		cout << "\n";
	}
	return 0;
}
