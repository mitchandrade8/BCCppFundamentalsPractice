
#include <iostream>

int main() {

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // MARK: - Empty String Method:

    if (name.empty()) {
        std::cout << "You did not enter your name!";
    } else {
        std::cout << "Hello " << name;
    }

    // MARK: - Length String Method:

    /* if (name.length() > 12) {
        std::cout << "Your name can not be over 12 characters!";
    } else {
        std::cout << "Welcome " << name;
    } */

    return 0;
}