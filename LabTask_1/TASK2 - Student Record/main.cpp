#include <iostream>
using namespace std;

int main() {
    
    string name, grade;
    int age;
    float cgpa;

    
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter Grade: ";
    cin >> grade;
    cout << "Enter CGPA: ";
    cin >> cgpa;

    
    cout << "\nStudent Record:\n";
    cout << "Name: " << name << "\nAge: " << age
         << "\nGrade: " << grade << "\nCGPA: " << cgpa << endl;

    return 0;
}
