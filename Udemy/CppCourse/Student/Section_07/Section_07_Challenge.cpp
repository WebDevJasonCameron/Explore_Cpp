/* Section 7
 * Challenge

    Write a C++ program as follows:
        Declare 2 empty vectors of integers named
        vector1 and vector2 respectively

        Add 10 and 20 to vector1 dynamically using push_back
        Display the elements in vector1 using the at() method as well as its size using the size() method

        Add 100 and 200 to vector2 dynamically using push_back
        Display the elements in vector2 using the at() method as well as its size using the size() method

        Declare an empty 2D vector called vector_2d
        Remember, that a 2D vector is a vector of vector<int>

        Add vector1 to vector_2d dynamically using push_back
        Add vector2 to vector_2d dynamically using push_back

        Display the elements in vector_2d using the at() method

        Chane vector1.at(0) to 1000

        Display the elements in vector_2d again using the at() method

        Display the element in vector1

        What did you expect?  Did you get what you expected?  What do you think happened?
 * */

#include <iostream>
#include <vector>

using namespace std;

int main() {

    cout << "\n1) ===========================" << endl;

    vector<int> vector1;
    vector<int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    cout << "number of vector1 at 0 is: " << vector1.at(0) << endl;
    cout << "number of vector1 at 1 is: " <<vector1.at(1) << endl;
    cout << "vector1 size is: " <<vector1.size() << endl;
    cout << "size of vector1 is: " << sizeof(vector1) << endl;

    cout << "\n2) ===========================" << endl;

    vector2.push_back(100);
    vector2.push_back(200);

    cout << "number of vector2 at 0 is: " << vector2.at(0) << endl;
    cout << "number of vector2 at 1 is: " << vector2.at(1) << endl;
    cout << "vector2 size is: " << vector1.size() << endl;
    cout << "size of vector2 is: " << sizeof(vector1) << endl;

    cout << "\n3) ===========================" << endl;

    vector <vector<int> > vector_2d;

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "vector_2d at 0.0 is: " << vector_2d.at(0).at(0) << endl;
    cout << "vector_2d at 0.1 is: " << vector_2d.at(0).at(0) << endl;
    cout << "vector_2d at 1.0 is: " << vector_2d.at(1).at(0) << endl;
    cout << "vector_2d at 1.1 is: " << vector_2d.at(1).at(1) << endl;


    cout << "\n4) ===========================" << endl;

    vector1.at(0) = 1000;

    cout << "vector_2d at 0.0 is ======>: " << vector_2d.at(0).at(0) << endl;
    cout << "vector_2d at 0.1 is: " << vector_2d.at(0).at(0) << endl;
    cout << "vector_2d at 1.0 is ======>: " << vector_2d.at(1).at(0) << endl;
    cout << "vector_2d at 1.1 is: " << vector_2d.at(1).at(1) << endl;


    cout << "\n5) ===========================" << endl;

    cout << "vector1 at 0 is: " << vector1.at(0) << endl;
    cout << "vector1 at 1 is: " << vector1.at(1) << endl;



    return 0;
}