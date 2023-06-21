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