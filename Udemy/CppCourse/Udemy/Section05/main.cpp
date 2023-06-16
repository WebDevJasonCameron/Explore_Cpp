#include <iostream>

using namespace std;    // Use the entire std namespace
                    // use ^g to get multiple selections of the same highlighted


// Getting rid of std
/*
int main() {
    int favorite_number;

    cout << "Enter your favorite number between 1 and 100: ";

    cin >> favorite_number;

    cout << "Amazing!! That's my favorite number too!" << endl;
    cout << "No really!!, " << favorite_number << " is my favorite number!" << endl;
    return 0;
}
*/

// cin and cout
/*
int main(){

//    cout << "Hello world" << endl;

//    cout << "Hello";
//    cout << "World" << endl;

//    cout << "Hello world!" << endl;
//    cout << "Hello" << " world!" << endl;
//    cout << "Hello " << "world!\n";
//    cout << "Hello\nOut\nThere\n";

//    int num1;
//    int num2;
//    double num3;

//    cout << "Enter an integer: ";
//    cin >> num1;
//    cout << "You entered in " << num1 << endl;

//    cout << "Enter a first integer: ";
//    cin >> num1;
//    cout << "Enter a second integer: ";
//    cin >> num2;
//    cout << "You entered " << num1 << " and " << num2 << endl;


    return 0;
}
*/

// Var types
int main(){

/***************************************
 * Character type
 **************************************/
//    char middle_initial {'J'};
//    cout << "My middle initial is :" << middle_initial << endl;

/***************************************
 * Integer types
 **************************************/
    unsigned short int exam_score {55}; // same as unsigned short exam_score {55}
    cout << "my exam score was " << exam_score << endl;

    int countries_represented {65};
    cout << "There were " << countries_represented << " countries represented in my meeting" << endl;

    long people_in_florida {20610000};
    cout << "There are about " << people_in_florida << " people in Florida" << endl;

    long people_on_earth {7'600'000'000};
    cout << "There are about " << people_on_earth << " people on earth" << endl;

    long long distance_to_alpha_centauri {9'461'000'000'000};
    cout << "The distance to alpha centauri is " << distance_to_alpha_centauri << " kilometers" << endl;

/***************************************
 * Floating types
 **************************************/
    float car_payment {401.23};
    cout << "My car payment is " << car_payment << endl;

    double pi {3.14159};
    cout << "Pi is " << pi << endl;

    long double large_amount {2.7e120};
    cout << large_amount << " is very big number" << endl;

/***************************************
 * Boolean types
 **************************************/
    bool game_over {false};
    cout << "The value of gameOver is " << game_over << endl;

/***************************************
 * Overflow examples
 **************************************/
//    short value1 {30000};
//    short value2 {1000};
//    short product {value1 * value2};
//
//    cout << "The sum of " << value1 << " and " << value2 << " is " << product << endl;


    return 0

}
