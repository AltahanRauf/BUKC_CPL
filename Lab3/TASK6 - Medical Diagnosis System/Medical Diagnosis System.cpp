#include <iostream>
using namespace std;

int main() {
    float temp;

    cout << "Enter your body temperature (°C): ";
    cin >> temp;

    if (temp < 36.5) {
        cout << "Diagnosis: Hypothermia" << endl;
    }
    else if (temp >= 36.5 && temp <= 37.5) {
        cout << "Diagnosis: Normal Body Temperature" << endl;
    }
    else if (temp >= 37.6 && temp <= 38.5) {
        cout << "Diagnosis: Low-Grade Fever" << endl;
    }
    else if (temp > 38.5) {
        cout << "Diagnosis: High Fever" << endl;
    }
    else {
        cout << "Invalid input." << endl;
    }

    return 0;
}
