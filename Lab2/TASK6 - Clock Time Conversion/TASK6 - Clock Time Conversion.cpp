/*
 Write a program to convert a given time in seconds into hours, minutes, and remaining seconds.
Hint: Use the modulus operator to perform the necessary calculations.

*/

#include <iostream>
using namespace std;

int main() {
    int totalSeconds;
    int hours, minutes, seconds, remaining;

    // Input
    cout << "\nWelcome to the Clock Time Converter! 🕒" << endl;
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
