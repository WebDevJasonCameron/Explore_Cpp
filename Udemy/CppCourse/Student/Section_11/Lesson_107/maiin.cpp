// Section 11
// Function Overloading
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// PROTOs
void print(int);
void print(char);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);

// FUNs
void print(int num) {
    cout << "Printing int: " << num << endl;
}

void print(char c) {
    cout << "Printing char: " << c << endl;
}

void print(double num) {
    cout << "Printing double: " << num << endl;
}

void print(string s) {
    cout << "Printing string: " << s << endl;
}

void print(string s1, string s2) {
    cout << "Printing strings: " << s1 << " and " << s2 << endl;
}

void print(vector<string> v) {
    cout << "Printing strings: " << endl;
    for (auto s: v) {
        cout << s << " ";
    }
    cout << endl;
}

// MAINs
int main() {

//    print(100);
    print('A');

//    print(123.5);
//    print(123.3F);

//    print("C-style string");

//    string s {"C++ string"};
//    print(s);

//    vector<string> three_stooges {"Larry", "Moe", "Curly"};
//    print(three_stooges);

    cout << endl;



    return 0;
}

