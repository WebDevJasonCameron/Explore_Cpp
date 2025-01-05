#include <iostream>

using namespace std;

int main() {

    /*=======================================================
     * INCREMENT AND DECREMENT OPERATOR

        Increment Operator ++
        Decrement Operator --

        Increments or decrements its operand by 1
        Can be used with integers, floating point types and pointers

        Prefix ++num
        Postfix num--

        Don't overuse this operator!
        ALERT!!!Never use it twice for the same variable in the same statement!

     */

    int counter {10};
    int result {0};

    // Example 1 - simple increment
//    cout << "Counter: " << counter << endl;
//
//    counter = counter + 1;
//    cout << "Counter: " << counter << endl;
//
//    counter++;
//    cout << "Counter: " << counter << endl;
//
//    ++counter;
//    cout << "Counter: " << counter << endl;

    // Example 2 - preincrement
//    counter = 10;
//    result = 0;
//
//    cout << "Counter: " << counter << endl;
//
//    result = ++counter;                         // Note the pre increment
//    cout << "Counter: " << counter << endl;
//    cout << "Result: " << result << endl;

    // Example 3 post increment
//    counter = 10;
//    result= 0;
//
//    cout << "Count: " << counter << endl;
//
//    result = counter++;                         // Note the post increment
//    cout << "Counter: " << counter << endl;
//    cout << "Result: " << result << endl;


    // Example 4
//    counter = 10;
//    result= 0;
//
//    cout << "Counter: " << counter << endl;
//
//    result = ++counter + 10;
//
//    cout << "Counter: " << counter << endl;
//    cout << "Result: " << result << endl;

    // Example 5
    counter = 10;
    result= 0;

    cout << "Counter: " << counter << endl;

    result = counter++ + 10;

    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;




    /*=======================================================
     * EUR CONVERTER
     */
//    const double usdPerEUR {1.19};
//
//    cout << "Welcome to the EUR to USD converter" << endl;
//    cout << "Enter the value in EUR: ";
//
//    double euros (0.0);
//    double dollars {0.0};;
//
//    cin >> euros;
//    dollars = euros * usdPerEUR;
//
//    cout << euros << "euros is equivalent to " << dollars << " dollars" << endl;
//
//    cout << endl;



    /*=======================================================
     * Main Lecture
     */
//    int num1 {200};
//    int num2 {100};
//
//    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
//
//    int result {0};
//
//    result = num1 + num2;
//    cout << num1 << " + " << num2 << " = " << result << endl;
//
//    result = num1 - num2;
//    cout << num1 << " - " << num2 << " = " << result << endl;
//
//    result = num1 * num2;
//    cout << num1 << " * " << num2 << " = " << result << endl;
//
//    result = num1 / num2;
//    cout << num2 << " /  " << num1 << " = " << result << endl;
//
//    result = num2 / num1;
//    cout << num2 << " /  " << num1 << " = " << result << endl;
//
//    result = num1 % num2;
//    cout << num2 << " %  " << num1 << " = " << result << endl;
//
//    num1 = 10;
//    num2 = 3;
//
//    result = num1 % num2;
//    cout << num1 << " % " << num2 << " = " << result;
//
//    cout << result << endl;
//
//    result = num1 * 10 + num2;
//
//    cout << result << endl;
//
//    cout << 5/10 << endl;
//
//    cout << 5.0/10.0 << endl;

    cout << endl;

    return 0;
}