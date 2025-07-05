#include <iostream>
#include <vector>
using namespace std;



int main() {

    vector<int> numbers {};
    char selection {};

    do {
        // Display Menu
        cout << "\nP - Print Numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M = Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "Enter your choice: ";
        cin >> selection;

        if (selection == 'P' || selection == 'p') {

            if (numbers.size() == 0) {
                cout << "[] - the list is empty";
            } else {
                cout << "[ ";
                for (auto number : numbers) {
                    cout << number << " ";
                }
                cout << " ]" << endl;
            }
        } else if (selection == 'A' || selection == 'a') {
            int number {};
            cout << "Enter a number: ";
            cin >> number;
            numbers.push_back(number);
        } else if (selection == 'M' || selection == 'm') {
            int total {};
            if (numbers.size() == 0) {
                cout << "Unable to calculate, no data available.";
            } else {
                for (auto number : numbers) {
                    total += number;
                }
                cout << "The mean is: " << static_cast<double>(total)/ numbers.size() << endl;
            }
        } else if (selection == 'S' || selection == 's') {
            if (numbers.size() == 0) {
                cout << "Unable to calculate, no data available.";
            } else {
                int smallest {};
                smallest = numbers[0];
                for (auto number : numbers) {
                    if (number < smallest) {
                        smallest = number;
                    }
                }
                cout << "Smallest number is: " << smallest << endl;
            }
        } else if (selection == 'L' || selection == 'l') {
            if (numbers.size() == 0) {
                cout << "Unable to calculate, no data available.";
            } else {
                int largest {};
                largest = numbers[0];
                for (auto number : numbers) {
                    if (number > largest) {
                        largest = number;
                    }
                }
                cout << "Largest number is: " << largest << endl;
            }
        } else {
            cout << "Invalid selection" << endl;
        }

    } while (selection != 'Q' && selection != 'q');

    cout << endl;

    return 0;
}
