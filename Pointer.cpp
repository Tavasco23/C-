#include <iostream>
using namespace std;

int main() {
    int nums[3];
    cout << "Enter 3 numbers: ";
    for (int i = 0; i < 3; ++i) {
        cin >> nums[i];
    }

    cout << "\nValues and memory addresses:\n";
    for (int i = 0; i < 3; ++i) {
        cout << "Value " << i << " = " << *(nums + i) << ", Address = " << (nums + i) << endl;
    }

    return 0;
}
