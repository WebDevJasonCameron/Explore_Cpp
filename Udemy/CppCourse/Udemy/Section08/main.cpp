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












