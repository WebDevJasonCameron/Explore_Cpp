/*
 * Frank's Carpet Cleaning Service
 * Charges $30 per room
 * Sales tax rate is 6%
 * Estimates are valid for 30 days
 *
 * Prompt the user for the number of rooms they would like cleaned
 * and provide an estimate such as:
 *
 * Estimate for carpet cleaning service:
 * Number of rooms: 2
 * Price per room: $30
 * Cost: $60
 * Tax $3.6
 * ==========================================

 Total estimate: $63.6
 this estimate is valid for 30 days

 Pseudocode:
    Prompt the user to enter the number of rooms
    Display number of rooms
    Display price per room

    Display cost: (number of rooms * price per room)
    Display tax: number of rooms * price per room * tax rate
    Display total estimate: (number of rooms * price per room) + (number of rooms * price per room * tax rate)
    Display estimate expiration time
 */

#include <iostream>

using namespace std;

int main() {

    const double pricePerRoom = 30;
    const double salesTax = 0.06;
    const int estimateExpiry = 30;

    cout << "How many number of rooms are there?  " << endl;
    int numberOfRooms = {0};
    cin >> numberOfRooms;
    cout << "The total number of rooms you provided is: " << numberOfRooms << endl;

    cout << "The price per room: $" << pricePerRoom << endl;
    double costForAllRooms = {numberOfRooms * pricePerRoom};
    double taxTotal = {costForAllRooms * salesTax};
    double total = {taxTotal + costForAllRooms};
    cout << "The cost for all rooms is: $" << costForAllRooms << endl;
    cout << "The total tax for all rooms is: $" << taxTotal << endl;
    cout << "The total cost with tax is: $" << total << endl;
    cout << "This estimate is valid for " << estimateExpiry << " days" << endl;

    return 0;
}










