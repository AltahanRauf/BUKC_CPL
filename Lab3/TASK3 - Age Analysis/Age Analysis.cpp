#include <iostream>
using namespace std;

int main() {
    int age1, age2, age3;

    cout << "Enter age of first friend: ";
    cin >> age1;
    cout << "Enter age of second friend: ";
    cin >> age2;
    cout << "Enter age of third friend: ";
    cin >> age3;

    if (age1 < age2 && age1 < age3) {
        cout << "The first friend is the youngest with age " << age1 << endl;
    }
    else if (age2 < age1 && age2 < age3) {
        cout << "The second friend is the youngest with age " << age2 << endl;
    }
    else if (age3 < age1 && age3 < age2) {
        cout << "The third friend is the youngest with age " << age3 << endl;
    }
    else {
        cout << "Two or more friends have the same youngest age." << endl;
    }

    return 0;
}
