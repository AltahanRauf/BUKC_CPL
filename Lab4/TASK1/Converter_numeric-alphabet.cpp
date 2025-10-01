#include<iostream>
using namespace std;
int main() {
    cout << "\n\tUpper    \t  Lower" << endl;
    for (int i = 0; i < 26; i++) {
        int U = 65 + i;
        int L = 97 + i;
        cout << "  ASCII Value: " << U << "," << "Char:" << char(U) << "   "<< "  ASCII:" << L << "," << "Char:" << char(L) << endl;       
    }
    return 0;
}
