#include <iostream>

using namespace std;

int AGE {20};

int main() {

    // SIZE OF *************************************************************

    cout << "sizeof information " << endl;
    cout << "==============================" << endl;

    cout << "char: " << sizeof(char) << " bytes." << endl;
    cout << "int: " << sizeof(int) << " bytes." << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << " bytes." << endl;
    cout << "short: " << sizeof(short) << " bytes." << endl;
    cout << "long: " << sizeof(long) << " bytes." << endl;
    cout << "long long: " << sizeof(long long) << " bytes." << endl;

    cout << "=============================" << endl;

    cout << "float: " << sizeof(float) << " bytes." << endl;
    cout << "double: " << sizeof(double) << " bytes. " << endl;
    cout << "long double: " << sizeof(long double) << "bytes.";

    // Use values defined in <climits>
    cout << " =======================================" << endl;

    cout << "Minimum values: "  << endl;
    cout << "char: " << CHAR_MIN << endl;
    cout << "int: " << INT_MIN << endl;
    cout << "short: " << SHRT_MIN << endl;
    cout << "long: " << LONG_MIN << endl;
    cout << "long long: " << LLONG_MIN << endl;

    cout << "======================================" << endl;

    cout << "Maximum values: "  << endl;
    cout << "char: " << CHAR_MAX << endl;
    cout << "int: " << INT_MAX << endl;
    cout << "short: " << SHRT_MAX << endl;
    cout << "long: " << LONG_MAX << endl;
    cout << "long long: " << LLONG_MAX << endl;

    // sizeof can also be used with variables names
    cout << "=======================================" << endl;

    cout << "sizeof using variable names: " << endl;
    int age {21};
    cout << "age is " << sizeof(age) << " bytes." << endl;
    // or
    cout << "age is " << sizeof age << " bytes." << endl;

    double wage {22.24};
    cout << "wage is " << sizeof(wage) << " bytes." << endl;
    // or
    cout << "wage is " << sizeof wage << " bytes." << endl;


    // Primitive Data Types *************************************************************
    /**************************************************
     *  Character Type
     ***************************************************/
//    char middleInitial {'L'};
//    cout << "My first initial is " << middleInitial << endl;

    /**************************************************
     *  Integer Types
     ***************************************************/
//    unsigned short int examScore {56};
//    cout << "My exam score was " << examScore << endl;

//    int countriesRepresented {65};
//    cout << "There were " << countriesRepresented << " countries represented in my meeting" << endl;

//    long peopleInFlorida {20610000};
//    cout << "There are about " << peopleInFlorida << " people in Florida" << endl;

//    long long peopleOnEarth {7'600'000'000};
//    cout << "There are about " << peopleOnEarth << " people on earth" << endl;

//    long long distanceToAlphaCentauri{9'461'000'000'000};
//    cout << "The distance to alpha centauri is " << distanceToAlphaCentauri << " kilometers" << endl;

    /**************************************************
     *  Floating pint types
     ***************************************************/
//    float carPayment {401.23};
//    cout << "My car payment is " << carPayment << endl;

//    double pi {3.14159};
//    cout << "PI is " << pi << endl;

//    long double largeAmount {2.7e120};
//    cout << largeAmount << " is a very big number" << endl;


    /**************************************************
     *  Boolean Type
     ***************************************************/
//    bool gameOver {false};
//    cout << "The value of gameOver is " << gameOver << endl;

    /**************************************************
     *  Boolean Type
     ***************************************************/
//    short value1 {30000};
//    short value2 {1000};
//    int product {value1 * value2};

//    cout << "The sum of " << value1 << " and " << value2 << " is " << product << endl;





    // Global Vars *************************************************************
//    int age {18};

//    cout << age << endl;
//    cout << AGE << endl;


    // VARS *************************************************************
//    int roomWidth {0};
//    int roomLength {0};

//    cout << "Enter the width of the room: ";
//    cin >> roomWidth;

//    cout << "Enter the length of the room: ";
//    cin >> roomLength;

//    cout << "The area of the room is " << roomWidth * roomLength << " square foot" << endl;




    return 0;
}
