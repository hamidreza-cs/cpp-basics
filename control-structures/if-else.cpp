#include <iostream>
using namespace std;

int main() {
    int age;
    int score;

    cout << "=== If-Else Statement ===\n\n";

    cout << "Enter your age: ";
    cin >> age;

    // Simple if-else
    if (age >= 18) {
        cout << "You are an adult." << endl;
    } else {
        cout << "You are a minor." << endl;
    }

    // if - else if - else
    cout << "\nEnter your exam score (0-100): ";
    cin >> score;

    if (score >= 90) {
        cout << "Grade: A - Excellent!" << endl;
    } 
    else if (score >= 80) {
        cout << "Grade: B - Very Good" << endl;
    } 
    else if (score >= 70) {
        cout << "Grade: C - Good" << endl;
    } 
    else if (score >= 50) {
        cout << "Grade: D - Pass" << endl;
    } 
    else {
        cout << "Grade: F - Fail" << endl;
    }

    // Nested if
    if (age >= 18) {
        if (score >= 70) {
            cout << "\nYou are eligible for university." << endl;
        } else {
            cout << "\nYou need to improve your score." << endl;
        }
    }

    return 0;
}