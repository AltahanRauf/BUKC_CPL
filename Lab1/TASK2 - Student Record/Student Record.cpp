#include <iostream>
using namespace std;
#include <string>

int main() {
    
    string name, grade;
    int age;
    float cgpa;

    
    cout << "\nEnter Name: ";
    getline(cin, name);
    cout << "\nEnter Age: ";
    cin >> age;
    cout << "\nEnter Grade: ";
    cin >> grade;
    cout << "\nEnter CGPA: ";
    cin >> cgpa;

    
    cout << "\nStudent Record:\n";
    cout << "Name: " << name << "\nAge: " << age
         << "\nGrade: " << grade << "\nCGPA: " << cgpa << endl;

    return 0;
}
