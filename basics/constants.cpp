#include <iostream>
using namespace std;

// Global constant
const double PI = 3.14159265359;
const int MAX_USERS = 100;

int main() {
    cout << "=== Constants in C++ ===\n\n";

    // Using const
    const string UNIVERSITY = "Your University Name";
    const int BIRTH_YEAR = 2005;

    cout << "Value of PI: " << PI << endl;
    cout << "Max Users : " << MAX_USERS << endl;
    cout << "University: " << UNIVERSITY << endl;
    cout << "Birth Year: " << BIRTH_YEAR << endl;

    // Calculate with constant
    double radius = 5.0;
    double area = PI * radius * radius;

    cout << "\n--- Circle Calculation ---\n";
    cout << "Radius : " << radius << endl;
    cout << "Area   : " << area << " square meters" << endl;

    // Difference between const and #define
    #define GRAVITY 9.81

    cout << "\nGravity: " << GRAVITY << " m/s²" << endl;

    // Trying to change constant (will cause error)
    // PI = 3.14;     // Error!

    return 0;
}