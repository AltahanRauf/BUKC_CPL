#include <iostream>
using namespace std;

int main() {
    const int TOTAL_SEATS = 35;   // bus capacity (constant)
    int availableSeats = TOTAL_SEATS;
    int requestedSeats;

    cout << "Total bus capacity: " << TOTAL_SEATS << endl;
    cout << "Available seats: " << availableSeats << endl;

    cout << "Enter number of seats you want to reserve: ";
    cin >> requestedSeats;

    if (requestedSeats <= availableSeats) {
        availableSeats = availableSeats - requestedSeats;  // update available seats
        cout << "Reservation successful! " << requestedSeats << " seat(s) reserved." << endl;
        cout << "Remaining seats: " << availableSeats << endl;
    }
    else {
        cout << "Sorry! Only " << availableSeats << " seat(s) are available." << endl;
    }

    return 0;
}
