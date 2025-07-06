#include <iostream>
#include <cstring>
#include <cctype>
#include <string>

using namespace std;

int main() {

    /* Section 10 Lesson 98
     *
     *
     */

//    string s1 {"Jason"};

//    for (char c: s1) {
//        cout << c << endl;
//    }

//    for (int c: s1) {
//        cout << c << endl;
//    }


//---

//    string s1 {"This is a test"};

//    cout << s1.find("This") << endl;
//    cout << s1.find("is") << endl;
//    cout << s1.find("test") << endl;
//    cout << s1.find('e') << endl;
//    cout << s1.find("is", 4) << endl;
//    cout << s1.find("XX", 4) << endl;
//
//    cout << s1.erase(0, 5) << endl;
//    cout << s1.erase(5, 4) << endl;
//    s1.clear();

// ---

//    string s1 {"Jason"};
//    cout << s1.length() << endl;
//    s1 += " Cameron";
//    cout << s1 << endl;

// ---

//    string s1;
//    cin >> s1;             // breaks if more than one word
//    cout << s1 << endl;

//    string s2;
//    cout << s2;
//    getline(cin, s2);
//    cout << s2 << endl;     // Fixed

// ---

    string s0;
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1 + s2 + s3 + s4};          // Apple
    string s6 {s1, 0, 3};        // App
    string s7 (10, 'X');                    // XXXXXXXXXX

//    cout << s0 << endl;                     // No garbage
//    cout << s0.length() << endl;            // empty string

//    cout << "\nInitialization" << "\n-------------------------------" << endl;
//    cout << "s1 is initialized to: " << s1 << endl;
//    cout << "s2 is initialized to: " << s2 << endl;
//    cout << "s3 is initialized to: " << s3 << endl;
//    cout << "s4 is initialized to: " << s4 << endl;
//    cout << "s5 is initialized to: " << s5 << endl;
//    cout << "s6 is initialized to: " << s6 << endl;
//    cout << "s7 is initialized to: " << s7 << endl;

// ---

//    s1 = "Watermelon";
//    cout << "s1 is now: " << s1 << endl;                    // Watermelon
//    s2 = s1;
//    cout << "s2 is now: " << s2 << endl;                   // Watermelon

//    s3 = "Frank";
//    cout << "s3 is now: " << s3 << endl;

//    s3[0] = 'C';                                            // Crank
//    cout << "s3 change first letter to C: " << s3 << endl;
//    s3.at(0) = 'P';                                         // Prank
//    cout << "s3 change first letter to P: " << s3 << endl;

// ---

//    s1 = "Apple";
//    for(size_t i {0}; i < s1.length(); i++){
//        cout << s1.at(i) << endl;
//    }
//    cout << endl;

//    for (auto c: s1) {
//        cout << c;
//    }
//    cout << endl;


    /* Section 10 Lesson 96
     *
     *
     * ->

        //    char first_name[20] {};
        //    char last_name[20] {};
        //    char full_name[50] {};
        //    char temp[50] {};

        //    cout << "Please enter your first name: ";
        //    cin >> first_name;

        //    cout << "Please enter your last name: ";
        //    cin >> last_name;
        //    cout << "---------------------------------" << endl;

        //    cout << "Hello, " << first_name << " your first name has " << strlen(first_name) << " characters" << endl;
        //    cout << "and your last name, " << last_name << " has " << strlen(last_name) << " characters" << endl;

        //    strcpy(full_name, first_name);
        //    strcat(full_name, " ");
        //    strcat(full_name, last_name);

        //    cout << "Your full name is: " << full_name << endl;

        //    cout << "---------------------------------" << endl;
        //    cout << "Enter your full name: ";
        //    cin >> full_name;

        //    cout << "---------------------------------" << endl;

        //    cout << "Enter your full name: ";
        //    cin.getline(full_name, 50);
        //    cout << "Your full name is: " << full_name << endl;

        //    cout << "---------------------------------" << endl;
        //    strcpy(temp, full_name);
        //    if (strcmp(temp, full_name) == 0){
        //        cout << temp << " and " << full_name << " are the same" << endl;
        //    } else {
        //        cout << temp << " and " << full_name << " are not the same" << endl;
        //    }

        //    cout << "---------------------------------" << endl;
        //    for(size_t i {0}; i < strlen(full_name); i++){
        //        if (isalpha(full_name[i])){
        //            full_name[i] = toupper(full_name[i]);
        //        }
        //    }
        //    cout << "Your full name is: " << full_name << endl;

        //    cout << "---------------------------------" << endl;
        //    if (strcmp(temp, full_name) == 0){
        //        cout << temp << " and " << full_name << " are the same" << endl;
        //    } else {
        //        cout << temp << " and " << full_name << " are not the same" << endl;
        //    }

    *
    *
    */

    return 0;
}
