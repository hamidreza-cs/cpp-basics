#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "=== C++ Data Types ===\n\n";

    // Integer types
    int integerNum = 42;
    long long bigNum = 1234567890;
    
    // Floating point
    float floatNum = 3.14;
    double doubleNum = 3.14159265359;
    
    // Character
    char letter = 'A';
    char digit = '7';
    
    // Boolean
    bool isLearning = true;
    bool hasError = false;
    
    // String
    string fullName = "Hamidreza Rajabloo";

    // Output
    cout << "Integer: " << integerNum << endl;
    cout << "Long Long: " << bigNum << endl;
    cout << "Float: " << floatNum << endl;
    cout << "Double: " << doubleNum << endl;
    cout << "Char: " << letter << " and " << digit << endl;
    cout << "Boolean: " << isLearning << " (true) and " << hasError << " (false)" << endl;
    cout << "String: " << fullName << endl;

    // Size of data types
    cout << "\n--- Size of Data Types ---\n";
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of long long: " << sizeof(long long) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(bool) << " bytes" << endl;
    cout << "Size of string: " << sizeof(string) << " bytes" << endl;
    return 0;
}