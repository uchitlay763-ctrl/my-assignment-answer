#include <iostream>
#include<iomanip>
#include <string>
using namespace std;

template <typename T>
T getMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "=== Testing Template Function ===" << endl;


    int int1 = 10, int2 = 20;
    cout << "Integers: " << int1 << " and " << int2 << endl;
    cout << "Maximum: " << getMax(int1, int2) << endl;


    float float1 = 3.14, float2 = 2.71;
    cout << "\nFloats: " << float1 << " and " << float2 << endl;
    cout << "Maximum: " << getMax(float1, float2) << endl;


    double double1 = 5.678, double2 = 5.679;
    cout << "\nDoubles: " << double1 << " and " << double2 << endl;
    cout << "Maximum: " << getMax(double1, double2) << endl;


    char char1 = 'A', char2 = 'Z';
    cout << "Characters: '" << char1 << "' and '" << char2 << "'" << endl;
    cout << "Maximum : '" << getMax(char1, char2) << "'" << endl;


    string str1 = "apple", str2 = "banana";
    cout << "Strings: \"" << str1 << "\" and \"" << str2 << "\"" << endl;
    cout << "Maximum : \"" << getMax(str1, str2) << "\"" << endl;

    return 0;
}
