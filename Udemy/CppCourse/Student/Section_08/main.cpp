#include <iostream>

using namespace std;

int main() {

    int num {};
    cout << "Enter a number: ";
    cin >> num;

    if (num < 10) {
        cout << num << " is less than ten" << endl;
    }
    else {
        cout << num << " is equal or greater than ten" << endl;
    }

    if (num > 10) {
        cout << num << " is greater than ten" << endl;
    }
    else {
        cout << num << " is less than or equal to ten" << endl;
    }

    /*
    // define conversion value in cents
    const int dollar_value {100};
    const int quarter_value {25};
    const int dime_value {10};
    const int nickel_value {5};
    const int penny_value {1};

    int change_amount {};

    // Solution 1 - not using the modulo operator

    cout << "Enter an amount in cents: ";
    cin >> change_amount;

    int balance {}, dollars{}, quarters{}, dimes{}, nickels{}, pennies{};

    dollars = change_amount / dollar_value;
    balance = change_amount - (dollars * dollar_value);

    quarters = balance / quarter_value;
    balance = balance - (quarters * quarter_value);

    dimes = balance / dime_value;
    balance = balance - (dimes * dime_value);

    nickels = balance / nickel_value;
    balance = balance - (nickels * nickel_value);

    pennies = balance / penny_value;

    cout << "That will be " << dollars << " dollars, " << quarters << " quarters, " << dimes << " dimes, " << nickels << " nickels, and " << pennies << " pennies." << endl;
    */



    /*=======================================================
    *
    int total {};
    int num1 {}, num2 {}, num3 {};
    const int count{3};

    cout << "Enter 3 integers separated by spaces: ";
    cin >> num1 >> num2 >> num3;

    total = num1 + num2 + num3;

    double average {0.0};

    average = static_cast<double>(total) / count;

    cout << "The 3 numbers were: " << num1 << " " << num2 << " " << num3 << endl;
    cout << "The sum of the numbers is " << total << endl;
    cout << "The average of the number is " << average << endl;

cout << endl;
*/

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

//    int counter {10};
//    int result {0};

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
//    counter = 10;
//    result= 0;
//
//    cout << "Counter: " << counter << endl;
//
//    result = counter++ + 10;
//
//    cout << "Counter: " << counter << endl;
//    cout << "Result: " << result << endl;

// Wat?
// Quick Git test...


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

 //   cout << endl;





    return 0;
}