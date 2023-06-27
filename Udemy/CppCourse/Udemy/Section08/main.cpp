#include <iostream>

using namespace std;

// EXPRESSIONS AND STATEMENTS

// Assignment Operator
/*
int main() {

    // initialization
    int num1 {10};
    int num2 {20};

    // assignment
//    num1 = 100;
//    num1 = num2;
    num1 = num2 = 1000;

    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;
    return 0;
}
*/

// Operands
/*
int main(){

    int num1 {200};
    int num2 {100};

//    cout << num1  << " + " << num2 << " = " << num1 + num2 << endl;

    // add
//    int result {0};
//    result = num1 + num2;
//    cout << num1  << " + " << num2 << " = " << result << endl;

    // subtract
//    int result {0};
//    result = num1 - num2;
//    cout << num1  << " - " << num2 << " = " << result << endl;

    // multiply
//    int result {0};
//    result = num1 * num2;
//    cout << num1  << " * " << num2 << " = " << result << endl;

    // divide
//    int result {0};
//    result = num2 / num1;
//    cout << num2  << " / " << num1 << " = " << result << endl;

    // modulo
//    int result {0};
//    result = num1 % num2;
//    cout << num1  << " % " << num2 << " = " << result << endl;

//    num1 = 10;
//    num2 = 3;
//
//    int result {0};
//    result = num1 % num2;
//    cout << num1  << " % " << num2 << " = " << result << endl;

    // Following PEMDAS
    int result = num1 * 10 + num2;

    return 0;
}
*/

// Problem: Convert euro to dollars
/*
int main(){

    const double usd_per_euro{1.19};
    double euros {0.0};
    double dollars {0.0};

    cout << "Welcom to the EUR to USD converter" << endl;
    cout << "Enter the value in EUR: ";

    cin >> euros;
    dollars = euros * usd_per_euro;
    cout << euros << " euros is equivalent to " << dollars << " dollars" << endl;

    cout << endl;
    return 0;
}
*/

// Increment and Decrement
/*
 * Increment 0perator ++
 * Decrement operator --
 *
 * Increments or decrements its operand by 1
 * Can be used with intergers, floating points types and pointers
 *
 * Prefix ++num
 * Postfix num++
 *
 * Don't over use!
 * Alert!!! Never use it twice for the same var in the same statement
 */
/*
int main(){

    int counter {10};
    int result {0};

    // Example 1 - simple increment
//    cout << "Counter: " << counter << endl;

//    counter = counter + 1;
//    cout << "Counter: " << counter << endl;

//    counter++;
//    cout << "Counter: " << counter << endl;

//    ++counter;
//    cout << "Counter: " << counter << endl;


    // Example 2 - preincrement
//    counter = 10;
//    result = 0;

//    cout << "Counter: " << counter << endl;

//    result = ++counter;                     // Note the pre increment
//    cout << "Counter: " << counter << endl;
//    cout << "Result: " << result << endl;


    // Example 3 - post-increment
//    counter = 10;
//    result = 0;

//    cout << "Counter: " << counter << endl;

//    result = counter++;                     // Note the post increment
//    cout << "Counter: " << counter << endl;
//    cout << "Result: " << result << endl;



    // Example 4
//    counter = 10;
//    result = 0;

//    cout << "Counter: " << counter << endl;

//    result = ++counter + 10;                     // Note the post increment
//    cout << "Counter: " << counter << endl;
//    cout << "Result: " << result << endl;



    // Example 5
    counter = 10;
    result = 0;

    cout << "Counter: " << counter << endl;

    result = counter++ + 10;                     // Note the post increment
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;

    return 0;
}
*/

// Mixed Type Expressions
/*
 * Ask the user to enter 3 integers
 * Calculate the sum of the integers then
 * calculate the average of the 3 integers
 *
 * Display the 3 integers entered
 * the sum of the 3 integers and
 * the average of the 3 integers
 */
/*
int main(){

    int total {};
    int num1 {}, num2 {}, num3 {};
    const int count {3};

    cout << "Enter 3 integers separated by spaces: ";
    cin >> num1 >> num2 >> num3;

    total = num1 + num2 + num3;

    double average {0.0};

    average = static_cast<double>(total) / count;

    cout << "The 3 numbers were: " << num1 << ", " << num2 << ", " << num3 << endl;
    cout << "The sum of the number is: " << total << endl;
    cout << "The average of the numbers is: " << average << endl;


    cout << endl;
    return 0;
}
*/

// Testing for Equality
/*
int main(){

    bool equal_result {false};
    bool not_equal_result {false};

    int num1 {}, num2 {};

     cout << boolalpha;       // will display true / false instead of 1/0 for booleans

//    cout << "Enter two integers seperated by a space: ";
//    cin >> num1 >> num2;
//    equal_result = { num1 == num2 };
//    not_equal_result = {num1 != num2 };
//    cout << "Comparison result (equals): " << equal_result << endl;
//    cout << "Comparison result (not equals): " << not_equal_result << endl;

    char
//    cout << "Enter two characters separated by a space: ";
//    cin >> char1 >> char2;
//    equal_result = { char1 == char2 };
//    not_equal_result = { char1 != char2 };
//    cout << "Comparison result (equals): " << equal_result << endl;
//    cout << "Comparison result (not equals): " << not_equal_result << endl;

    char double1 {}, double2 {};
//    cout << "Enter two characters separated by a space: ";
//    cin >> double1 >> double2;
//    equal_result = { double1 == double2 };
//    not_equal_result = { double1 != double2 };
//    cout << "Comparison result (equals): " << equal_result << endl;
//    cout << "Comparison result (not equals): " << not_equal_result << endl;


    cout << "Enter integer and double separated by a space: ";
    cin >> num1 >> double1;
    equal_result = { num1 == double1 };
    not_equal_result = { num1 != double1 };
    cout << "Comparison result (equals): " << equal_result << endl;
    cout << "Comparison result (not equals): " << not_equal_result << endl;

    return 0;
}
*/

// Relational Operators
int main(){

    int num1 {}, num2 {};

    cout << boolalpha;
    cout << "Enter 2 integers separated by a space:  ";
    cin >> num1 >> num2;

//    cout << num1 << " > " << num2 << " : " << (num1 > num2) << endl;
//    cout << num1 << " >= " << num2 << " : " << (num1 >= num2) << endl;
//    cout << num1 << " < " << num2 << " : " << (num1 < num2) << endl;
//    cout << num1 << " <= " << num2 << " : " << (num1 <= num2) << endl;

    const int lower {10};;
    const int upper {20};

    cout << "\nEnter an integer that is greater than " << lower << ": ";
    cin >> num1;
    cout << num1 << "> " << lower << " is " << (num1 > lower) << endl;

    cout << "\nEnter an integer that is less than " << upper << ": ";
    cin >> num1;
    cout << num1 << " <= " << upper << " is " << (num1 <= upper) << endl;


    return 0;
}









