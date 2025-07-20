#include <iostream>
using namespace std;

void displayValues(int* a, int* b , int* c) {
    cout << "\nValues and memory addresses:\n";
    cout << "Value of a = " << *a << ", Address = " << a << endl;
    cout << "Value of b = " << *b << ", Address = " << b << endl;
    cout << "Value of c = " << *c << ", Address = " << c << endl;
}

int main() {
    int a, b, c;
    for (int i = 0; i < 3; ++i) {
        cout << "Enter 3 numbers: ";
        cin >> a >> b >> c;
        displayValues(&a, &b, &c);
    }
    return 0;
}
