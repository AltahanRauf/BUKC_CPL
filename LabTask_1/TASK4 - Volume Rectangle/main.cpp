#include <iostream>
using namespace std;

int main() {

    float length, width, height, volume;


    cout << "Enter Length: ";
    cin >> length;
    cout << "Enter Width: ";
    cin >> width;
    cout << "Enter Height: ";
    cin >> height;


    volume = length * width * height;


    cout << "Volume = " << volume << endl;

    return 0;
}
