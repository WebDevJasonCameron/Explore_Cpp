#include <iostream>

extern int x;

int main() {

    std::cout << "What is your favorite number between 1 and 100:  " << std::endl;
    int favorite_number;
    std::cin >> favorite_number;
    std::cout << "That is amazing.  That is my favorite number!" << std::endl;
    std::cout << "No, really, " << favorite_number << " is my favorite number too!";
    return 0;
}

