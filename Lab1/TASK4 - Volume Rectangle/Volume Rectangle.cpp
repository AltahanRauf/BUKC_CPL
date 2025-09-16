#include <iostream>
using namespace std;

int main() {

    float length, width, height, volume;


    cout << "\nEnter Length: ";
    cin >> length;
    cout << "Enter Width: "<<endl;
    cin >> width;
    cout << "Enter Height: "<<endl;
    cin >> height;


    volume = length * width * height;


    cout << "Volume = " << volume << endl;

    return 0;
}
