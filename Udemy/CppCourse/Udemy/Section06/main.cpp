#include <iostream>

using namespace std;

/*
 * Frank's Carpet Cleaning Service
 * Charges $30 per room
 * Sale tax rate is 6%
 *
 * Prompt the user for the number of rooms they would like cleaned
 * and provide an estimate such as:
 *
 *  Estimate for carpet Cleaning Service:
 *      - Number of rooms: 2
 *      - Price per room: $30
 *      - Cost $60
 *      - Tax: $3.6
 *
 * ===================================================================
 * Total estimate: $ 63.6
 * This estimate is valid for 30 days
 *
 * Pseudocode:
 *      - Prompt the user to enter the number of rooms
 *      - Display number of rooms
 *      - Display price per room
 *
 *      - Display cost: (number of rooms * price per room)
 *      - Display tax: number of rooms * price per room * tax rate
 *      - Display total estimate: (number of rooms * price per room) + (number of rooms * price per room * tax rate)
 *      - Display estimate expiration time
 */

int main() {

    int number_of_rooms {0};
    const int cost_per_room {30};
    const double tax_rate {0.06};


    cout << "Hello, welcome to Frank's Carpet Cleaning Service\n" << endl;
    cout << "How many rooms would you like cleaned? ";
    cin >> number_of_rooms;

    cout << "\nEstimate for carpet cleaning service " << endl;
    cout << "Number of rooms: " << number_of_rooms << endl;
    cout << "Price per room: $" << cost_per_room << endl;
    cout << "Cost for all rooms: $" << number_of_rooms * cost_per_room << endl;
    cout << "Tax: $" << number_of_rooms * cost_per_room * tax_rate << endl;
    cout << "================================================" << endl;

    double total = (number_of_rooms * cost_per_room) + (number_of_rooms * cost_per_room * tax_rate);
    cout << "Total Cost: $" << total << endl;
    cout << "This total is only good for 30 days.";









    return 0;
}
