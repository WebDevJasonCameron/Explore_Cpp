#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
#include <vector>

using namespace std;

// PROTOs
double calc_area_circle(double radius);
double volume_cylinder(double radius, double height);
void area_circle();
void volume_cylinder();

void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string> v);
void print_vector(vector<string> v);

int add_numbers (int a, int b);

int main() {

    /* Section11 Lesson 104
     *
     *
     */
    int num {10};
    int another_num {20};

    cout << "num before calling pass_by_value1: " << num << endl;
    pass_by_value1(num);
    cout << num << " after calling pass_by_value1: " << num << endl;



    /* Section 11 Lesson 103
     *


        //    area_circle();
        //    volume_cylinder();

    *
    */



    /* Section 11 Lesson 102
     *
     * ->

        //    double num {};

        //    cout << "Enter a number: ";
        //    cin >> num;

        //    cout << "The sqrt of " << num << " is: " << sqrt(num) << endl;
        //    cout << "The cube root of " << num << " is: " << cbrt(num) << endl;

        //    cout << "The sin of " << num << " is: " << sin(num) << endl;
        //    cout << "The cosine of " << num << " is: " << cos(num) << endl;

        //    cout << "The ceil of " << num << " is: " << ceil(num) << endl;
        //    cout << "The floor of of " << num << " is: " << floor(num) << endl;
        //    cout << "The round of " << num << " is: " << round(num) << endl;

        //    double power {};
        //    cout << "\nEnter a power to raise " << num << " to: ";
        //    cin >> power;
        //    cout << num << " raised to the " << power << " power is: " << pow(num, power) << endl;

        // ---

        //    int random_number {};
        //    size_t count {10};
        //    int min {1};
        //    int max {6};

        //    cout << "RAND_MAX on my system is: " << RAND_MAX << endl;
        //    srand(time(nullptr));                   // seed the random number generator with current time
        //    for (size_t i {1}; i <= count; i++) {
        //        random_number = rand() % max + min;
        //        cout << random_number << endl;
        //    }

        //    cout << endl;

     *
     */

    return 0;
}


// FUNs
double calc_area_circle(double radius) {
    const double pi {3.14};
    return pi * radius * radius;
}

double volume_cylinder(double radius, double height) {
    const double pi {3.14};
    return calc_area_circle(radius) * height;
}

void area_circle() {
    double radius {};
    cout << "\nEnter the radius of the circle: ";
    cin >> radius;

    cout << "The area of the circle with the radius of " << radius << " is: " << calc_area_circle(radius) << endl;
}

void volume_cylinder() {
    double radius {};
    double height {};
    cout << "\nEnter the radius of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;

    cout << "The volume of the cylinder with the radius of " << radius << " and height of " << height << " is: " << volume_cylinder(radius, height) << endl;
}

int add_numbers (int a, int b) {
    return a + b;
}

void pass_by_value1(int num) {
    num = 1000;
}

void pass_by_value2(string s) {
    s = "Changed";
}

void pass_by_value3(vector<string> v) {
    v.clear();
}

void print_vector(vector<string> v) {
    for (auto s: v) {
        cout << s << " ";
    }
    cout << endl;
}