/*
 Task 6: Clock Time Converter
 - Input: total seconds
 - Output: hours, minutes, seconds
 - Hint: use division (/) and modulus (%)
*/

#include <iostream>
using namespace std;

int main() {
    int totalSeconds;
    int hours, minutes, seconds, remaining;

    // Input
    cout << "Welcome to the Clock Time Converter! 🕒" << endl;
    cout << "Enter the time duration in seconds: ";
    cin >> totalSeconds;

    // Conversions
    hours = totalSeconds / 3600;        // 1 hour = 3600 seconds
    remaining = totalSeconds % 3600;    // leftover seconds after hours
    minutes = remaining / 60;           // 1 minute = 60 seconds
    seconds = remaining % 60;           // leftover after minutes

    // Output
    cout << "\nResults:" << endl;
    cout << "-----------------------------" << endl;
    cout << "Original Time: " << totalSeconds << " seconds" << endl;
    cout << "Converted Time: " << hours << " hour(s), "
         << minutes << " minute(s), and "
         << seconds << " second(s)" << endl;

    return 0;
}
