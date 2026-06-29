#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declaration and Initialization
    int age = 20;
    float height = 1.75;
    double weight = 68.5;
    char grade = 'A';
    bool isStudent = true;
    string name = "Hamidreza Rajabloo";

    // Output
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " meters" << endl;
    cout << "Weight: " << weight << " kg" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is Student: " << isStudent << endl;

    // Changing values
    age = 21;
    cout << "\nAfter one year, Age: " << age << endl;

    return 0;
}