#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;
/*
int main() {
    int x = 10;
    int y = 20;
    cout << "x = " << x << endl
         << "x = " << y;

    return 0;
}
*/

/*
int main() {
    int sales = 95000;
    const double stateTax = 0.04;
    const double countyTax = 0.02;

    double stateTaxTotal = sales * stateTax;
    double countyTaxTotal = sales * countyTax;
    double net = sales - stateTaxTotal - countyTaxTotal;

    cout << "Total State Tax Deducted: $" << stateTaxTotal << endl
         << "Total County Tax Deducted: $" << countyTaxTotal << endl
         << "Net Profit after taxes: $" << net << endl;

}
*/

/*
int main() {
    cout << "Enter a value: ";
    int value;
    cin >> value;
    cout << "Wonderful!  Your number was " << value;

    return 0;
}
*/

/*
int main() {
    cout << "Enter values for x and y: ";
    double x;
    double y;
    cin >> x >> y;
    cout << x + y;
    return 0;
}
*/

/*
int main() {
    cout << "Fahrenheit: ";
    int fahrenheit;
    cin >> fahrenheit;
    double celsius = (fahrenheit - 32) / 1.8;
    cout << celsius;
    return 0;
}
*/

/*
 int main() {
    cout << "Enter radius: ";
    double radius;
    cin >> radius;
    const double pi = 3.14;
    double area = pi * pow(radius, 2);
    cout << area;
    return 0;
 }
 */

/*
int main() {
    double price = 99.99;
    float interestRate = 3.67F;
    long fileSize = 9000L;
    char letter = 'a';
    bool isValid = true;
    auto anotherFileSize = 9000L;

    return 0;
}
*/

// BRACES
/*
int main() {
    int number {};
    cout << number;

    return 0;
}
*/

// HEX NUMBER
/*
int main() {
    int biNumber = 0b11111111;
    cout << biNumber << endl;
    int hexNumber = 0xff;
    cout << hexNumber << endl;


    return 0;
}
*/

// NARROWING
/*
int main() {
    int number = 1'000'000;
    //short another {number};

    return 0;
}
*/

// RANDOM NUMBS
/*
int main() {
    srand(time(0));         // Seconds since Jan 1 1970
    int number = rand() % 10;
    cout << number;

    return 0;
}
*/

// ROLL DICE
int main() {
    const short minVal = 1;
    const short  maxVal = 6;

    srand(time(0));
    (rand() % (maxVal - minVal + 1)) + minVal;
    return 0


    cout << number;

    return 0;
}




