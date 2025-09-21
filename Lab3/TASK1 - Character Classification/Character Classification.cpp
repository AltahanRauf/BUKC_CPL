#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    // check if digit
    if (ch >= '0' && ch <= '9') {
        cout << ch << " is a digit." << endl;
    }
    // check if alphabet
    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        // check vowels
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            cout << ch << " is a vowel." << endl;
        }
        else {
            cout << ch << " is a consonant." << endl;
        }
    }
    else {
        cout << ch << " is neither a vowel, consonant, nor digit." << endl;
    }

    return 0;
}
