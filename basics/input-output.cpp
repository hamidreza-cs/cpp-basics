#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;
    float height;
    char gender;

    cout << "=== Input & Output in C++ ===\n\n";

    // Getting input from user
    cout << "Enter your name: ";
    getline(cin, name);           // برای گرفتن اسم کامل

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your height (in meters): ";
    cin >> height;

    cout << "Enter your gender (M/F): ";
    cin >> gender;

    // Output with formatting
    cout << "\n--- Your Information ---\n";
    cout << "Name   : " << name << endl;
    cout << "Age    : " << age << " years old" << endl;
    cout << "Height : " << height << " meters" << endl;
    cout << "Gender : " << gender << endl;

    // Simple calculation
    cout << "\nIn 5 years, you will be " << (age + 5) << " years old." << endl;

    return 0;
}