#include <iostream>

using namespace std;

int main() {

    /*
     * EUR
     */
    const double usdPerEUR {1.19};

    cout << "Welcome to the EUR to USD converter" << endl;
    cout << "Enter the value in EUR: ";

    double euros (0.0);
    double dollars {0.0};;

    cin >> euros;
    dollars = euros * usdPerEUR;

    cout << euros << "euros is equivalent to " << dollars << " dollars" << endl;

    cout << endl;






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