#include <iostream>
#include <vector>

 using namespace std;

int main() {

    // VECTORS
    // vector <char> vowels;                            // empty
    // vector <char> vowels(5);                         // 5 initialized to zero
//    vector <char> vowels{'a', 'e', 'i', 'o', 'u'};

//    cout << vowels[0] << endl;
//    cout << vowels[4] << endl;

    // vector <int> testScores (3);                   // 3 elements all initialized to zero
    // vector <int testScores (3, 100)                // 3 elements all initialized to 100

//    vector <int> testScores {100, 98, 89};

//    cout << "\nTest scores using array syntax: " << endl;
//    cout << testScores[0] << endl;
//    cout << testScores[1] << endl;
//    cout << testScores[2] << endl;

//    cout << "\nTest scores using vector syntax: " << endl;
//    cout << testScores.at(0) << endl;
//    cout << testScores.at(1) << endl;
//    cout << testScores.at(2) << endl;
//    cout << "\nThere are " << testScores.size() << " scores in the vector" << endl;

//    cout << "\nEnter 3 test scores: " << endl;
//    cin >> testScores.at(0);
//    cin >> testScores.at(1);
//    cin >> testScores.at(2);

//    cout << "\nUpdated test scores: " << endl;
//    cout << testScores.at(0) << endl;
//    cout << testScores.at(1) << endl;
//    cout << testScores.at(2) << endl;

//    cout << "\nEnter a test score to add to the vector: ";

//    int scoreToAdd {0};
//    cin >> scoreToAdd;

//    testScores.push_back({scoreToAdd});

//    cout << "\nEnter one more test score to add to the vector: ";

//    cin >> scoreToAdd;
//    testScores.push_back(scoreToAdd);

//    cout << "\nTest scores are now: " << endl;
//    cout << testScores.at(0) << endl;
//    cout << testScores.at(1) << endl;
//    cout << testScores.at(2) << endl;
//    cout << testScores.at(3) << endl;
//    cout << testScores.at(4) << endl;

    // Example of a 2D-vector
    vector <vector<int> > movieRatings
    {
            {1, 2, 3, 4},
            {2, 3, 4, 5},
            {3, 4, 5, 6}
    };

    cout << "\nHere are the movie rating for reviewer #1 using array syntax:" << endl;
    cout << movieRatings[0][0] << endl;
    cout << movieRatings[0][1] << endl;
    cout << movieRatings[0][2] << endl;
    cout << movieRatings[0][3] << endl;

    cout << "\nHere are the movie rating for reviewer #1 using vector syntax:" << endl;
    cout << movieRatings.at(0).at(0) << endl;
    cout << movieRatings.at(0).at(1) << endl;
    cout << movieRatings.at(0).at(2) << endl;
    cout << movieRatings.at(0).at(3) << endl;


    cout << "\nHere are the movie rating for reviewer #2 using array syntax:" << endl;
    cout << movieRatings[1][0] << endl;
    cout << movieRatings[1][1] << endl;
    cout << movieRatings[1][2] << endl;
    cout << movieRatings[1][3] << endl;

    cout << "\nHere are the movie rating for reviewer #2 using vector syntax:" << endl;
    cout << movieRatings.at(1).at(0) << endl;
    cout << movieRatings.at(1).at(1) << endl;
    cout << movieRatings.at(1).at(2) << endl;
    cout << movieRatings.at(1).at(3) << endl;

//    vector <char> vowels (5);
//    vector <int> testScores (10);
//    vector <double> hiTemps (5);

//    vector <char> vowels {'a', 'e', 'i', 'o', 'u'};
//    vector <int> testScores {100, 98, 55, 87};
//    vector <double> hiTemps {365, 80.0};


    // ARRAYS

//    char vowels[] {'a', 'e', 'i', 'o', 'u'};
//    cout << "\nThe first vowel is: " << vowels[0] << endl;
//    cout << "The last vowel is: " << vowels[4] << endl;

//    cin >> vowels[5];  // OUT OF BOUNDS!!! DON'T USE THIS

//    double hiTemps [] {90.1, 89.8, 77.5, 81.6};
//    cout << "\nThe first high temperature is: " << hiTemps[0] << endl;

//    hiTemps[0] = 100.7;  // set the first element in hiTemps to 100.7
                         // we'll talk about assignment statement in an upcoming section

//    cout << "The first high temperature is now: " << hiTemps[0] << endl;

//    int testScores [5]{0};

//    cout << "\nFirst score at index 0: " << testScores[0] << endl;
//    cout << "Second score at index 1: " << testScores[1] << endl;
//    cout << "Third score at index 2: " << testScores[2] << endl;
//    cout << "Fourth score at index 3: " << testScores[3] << endl;
//    cout << "Fifth score at index 4: " << testScores[4] << endl;

//    cout << "\nEnter 5 test scores: ";
//    cin >> testScores[0];
//    cin >> testScores[1];
//    cin >> testScores[2];
//    cin >> testScores[3];
//    cin >> testScores[4];

//    cout << "\nFirst score at index 0: " << testScores[0] << endl;
//    cout << "Second score at index 1: " << testScores[1] << endl;
//    cout << "Third score at index 2: " << testScores[2] << endl;
//    cout << "Fourth score at index 3: " << testScores[3] << endl;
//    cout << "Fifth score at index 4: " << testScores[4] << endl;

//cout << "\nNotice what the value of the array name is: " << testScores <<endl;

//cout << endl;



    return 0;
}
