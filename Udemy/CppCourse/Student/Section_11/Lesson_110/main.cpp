// Section 11
// Scope Rulls
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// PROTOs
void local_example(int x);
void global_example();
void static_local_example();

// FUNs
void local_example(int x) {
    int num {1000} ;             // local to local_example
    cout << "\nLocal num is " << num << " in local_example - start" << endl;
    num = x;
    cout << "Local num is: " << num << " in local_example - end" << endl;
    // num1 in main is not within scope - so it can't be used here
}

void global_example(){

}

// MAINs
int main(){

    int num {100};
    int num1 {500};

    cout << "Local num is: " << num << " in main" << endl;

    {
        int num{200};
        cout << "Local num is: " << num << " in inner block in main" << endl;
        cout << "Inner block in main can see out - num1 is: " << num1 << endl;
    }

    cout << "Local num is: " << num << " in main" << endl;

    // ---
    local_example(10);
    local_example(20);

//    global_example();
//    global_example();


    return 0;
}


