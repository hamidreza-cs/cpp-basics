#include <iostream>
using namespace std;

int main() {
    cout << "=== C++ Operators ===\n\n";

    int a = 10;
    int b = 4;

    cout << "a = " << a << ", b = " << b << "\n\n";

    // Arithmetic Operators
    cout << "--- Arithmetic Operators ---\n";
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;
    cout << "a % b = " << (a % b) << endl << endl;

    // Relational Operators
    cout << "--- Relational Operators ---\n";
    cout << "a > b  = " << (a > b) << endl;
    cout << "a < b  = " << (a < b) << endl;
    cout << "a == b = " << (a == b) << endl;
    cout << "a != b = " << (a != b) << endl << endl;

    // Logical Operators
    cout << "--- Logical Operators ---\n";
    bool x = true;
    bool y = false;
    cout << "x && y = " << (x && y) << endl;
    cout << "x || y = " << (x || y) << endl;
    cout << "!x     = " << (!x) << endl << endl;

    // Assignment Operators
    cout << "--- Assignment Operators ---\n";
    int c = a;
    cout << "c = a  → c = " << c << endl;
    c += 5;   // c = c + 5
    cout << "c += 5 → c = " << c << endl;
    c *= 2;
    cout << "c *= 2 → c = " << c << endl;

    return 0;
}