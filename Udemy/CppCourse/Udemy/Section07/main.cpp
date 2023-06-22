#include <iostream>
#include <vector>

using namespace std;


// COMPOUND DATA TYPES

// ARRAYS
/*
int main() {

//    char vowels[] {'a', 'e', 'i', 'o', 'u'};
//    cout << "\nThe first vowel is: " << vowels[0] << endl;
//    cout << "The last vowel is: " << vowels[4] << endl;

//    double hi_temps[] {90.1, 89.8, 77.5, 81.6};
//    cout << "\nThe first high temperature is: " << hi_temps[0] << endl;

//    hi_temps[0] = 100.8;    // set the first element in hi_temps to 100.7
//                            // we'll talke about assignment statements in an upcoming section

//    cout << "The first high temperature is now: " << hi_temps[0] << endl;

    int test_scores[5]{};

    cout << "\nFirst score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1 " << test_scores[1] << endl;
    cout << "Third score at index 2: " << test_scores[2] << endl;
    cout << "Fourth score at index 3: " << test_scores[3] << endl;
    cout << "Fifth score at index 4: " << test_scores[4] << endl;

//    cout << "\nEnter 5 test scores: ";
//    cin >> test_scores[0];
//    cin >> test_scores[1];
//    cin >> test_scores[2];
//    cin >> test_scores[3];
//    cin >> test_scores[4];

    cout << "\nFirst score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1 " << test_scores[1] << endl;
    cout << "Third score at index 2: " << test_scores[2] << endl;
    cout << "Fourth score at index 3: " << test_scores[3] << endl;
    cout << "Fifth score at index 4: " << test_scores[4] << endl;

    cout << "\nNotice what the value of the array name is: " << test_scores << endl;

    return 0;
}
*/

// VECTORS
/*
int main() {

    //DiF ways to initialize a vector
//    vector <car> vowels;                          // empty
//    vector <char> vowels(5);                      // 5 initialized to zero
    vector <char> vowels{'a', 'e', 'i', 'o', 'u'};

    cout << vowels[0] << endl;
    cout << vowels[4] << endl;


//    vector <int> test_scores(3)                   // 3 elements all initialized to zero
//    vector <int> test_scores(3, 100)              //3 elements all initialized to 100

//    vector <int> test_scores{100, 98, 89};

//    cout << "\nTest scores using array syntax" << endl;
//    cout << test_scores[0] << endl;
//    cout << test_scores[1] << endl;
//    cout << test_scores[2] << endl;

    vector <int> test_scores{100, 98, 89};

    cout << "\nTest scores using vector syntax" << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;

    cout << "\nThere are " << test_scores.size() << " scores in the vector" << endl;

    cout << "\nEnter 3 test scores: ";
    cin >> test_scores.at(0);
    cin >> test_scores.at(1);
    cin >> test_scores.at(2);

    cout << "\nUpdated test scores: " << endl;
    cout << test_scores[0] << endl;
    cout << test_scores[1] << endl;
    cout << test_scores[2] << endl;

    cout << "\nEnter a test score to add to the vector: ";
    int score_to_add {0};
    cin >> score_to_add;

    test_scores.push_back(score_to_add);

    cout << "\nEnter one more test score to add to the vector: ";
    cin >> score_to_add;

    test_scores.push_back(score_to_add);

    cout << "\nTest scores are now:" << endl;
    cout << test_scores[0] << endl;
    cout << test_scores[1] << endl;
    cout << test_scores[2] << endl;
    cout << test_scores[3] << endl;
    cout << test_scores[4] << endl;

    cout << "\nThere are now " << test_scores.size() << " scores in the vector" << endl;

//    cout << "This should cause an exception!!" << test_scores.at(10);

    return 0;
}
*/

// Challenge
/*
 * Write a C++ program as follows:
 *
 * Declare 2 empty vectors of integers named
 * vector1 and vector2
 *
 * Add 10 and 20 to vector1 dynamically using push_back
 * Display the elements in vector1 using the at() method as well as its size using the size() method
 *
 * Add t00 and 200 to vector2 dynamically using push_back
 * Display the elements in vector2 using the at() method as well as its size using the size() method
 *
 * Declare an empty 2D vector called vector_2d
 * Remember that a 2D vector is a vector of vector<int>
 *
 * Add vector2 to vector_2d dynamically using push_back
 * Add vector to vector_2d dynamically using push_back
 *
 * Display the elements in vector_2d using the at() method
 *
 * Change vector1.at(0) to 1000
 *
 * Display the element in vector_2d again using the at() method
 *
 * Display the elements in vector1
 *
 * What did you expect?  Did you get what you expected?  What do you think happened?
 */
int main(){

    vector <int> vector1;
    vector <int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);
    cout << "vector 1 at 0 place is: " << vector1.at(0) << endl;
    cout << "vector 1 at 1 place is: " << vector1.at(1) << endl;

    vector2.push_back(100);
    vector2.push_back(200);
    cout << "vector 2 at 0 place is: " << vector2.at(0) << endl;
    cout << "vector 2 at 1 place is: " << vector2.at(1) << endl;

    vector <vector<int>> vector_2d;

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    cout << "vector 2d at 0 0 place is: " << vector_2d.at(0).at(0) << endl;
    cout << "vector 2d at 0 1 place is: " << vector_2d.at(0).at(1) << endl;
    cout << "vector 2d at 1 0 place is: " << vector_2d.at(1).at(0) << endl;
    cout << "vector 2d at 1 1 place is: " << vector_2d.at(1).at(1) << endl;

    vector1.at(0) = 1000;
    cout << "vector 1 at 0 place changed to: " << vector1.at(0) << endl;
    cout << "vector 2d at 0 0 place changed to: " << vector_2d.at(0).at(0) << endl;

    return 0;
}