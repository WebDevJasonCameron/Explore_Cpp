/*
    Frank's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small and large rooms they would like cleaned
    and provide an estimate such as:

    Estimate for carpet cleaning service
    Number of small rooms: 3
    Number of large rooms: 1
    Price per small room: $25
    Price per large room $35
    Cost: $110
    Tax: $6.6
    =====================================
    Total estimate: $116.6
    This estimate is valid for 30 days
 */

#include <iostream>

using namespace std;

int main() {

    const double costPerSmallRoom = 25.00;
    const double costPerLargeRoom = 35.00;
    const double tax = 0.06;
    const int expiryDate = 30;

    cout << "How many small rooms do you need cleaning? " << endl;
    int totalSmallRooms = 0;
    cin >> totalSmallRooms;

    cout << "How many large rooms do you need cleaning?" << endl;
    int totalLargeRooms = 0;
    cin >> totalLargeRooms;

    double totalCostForSmallRooms = totalSmallRooms * costPerSmallRoom;
    double totalCostForLargeRooms = totalLargeRooms * costPerLargeRoom;
    double totalForAllRoomsCombine = totalCostForLargeRooms + totalCostForSmallRooms;
    double totalTax = totalForAllRoomsCombine * tax;
    double totalCostWithTax = totalForAllRoomsCombine + totalTax;


    cout << "Estimate for carpet cleaning service: " << endl;
    cout << "Number of small rooms: " << totalSmallRooms << endl;
    cout << "Number of large rooms: " << totalLargeRooms << endl;
    cout << "Price per small room: $" << costPerSmallRoom << endl;
    cout << "Price per large room: $" << costPerLargeRoom << endl;

    cout << "Cost: $" << totalForAllRoomsCombine << endl;
    cout << "Tax: $" << totalTax << endl;
    cout << "===================================================" << endl;
    cout << "Total estimate: $" << totalCostWithTax << endl;
    cout << "this estimate is valid for " << expiryDate << " days" << endl;


    return 0;
}



















