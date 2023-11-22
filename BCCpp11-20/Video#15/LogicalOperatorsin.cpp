
#include <iostream>

int main() {

    // MARK: - Key Notes
        // && = check if two conditions are true
        // || = check if at least one of the two conditions is true
        // ! = reverses the logical state of its operand

    int temp;
    bool sunny = true;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;


    // MARK: - Not Logical Operator Example: '!'

    if (sunny == true) {
        std::cout << "It is sunny outside!";
    } else {
        std::cout << "It is cloudy outside!";
    }

    // MARK: - Or Logical Operator Example: '||'

    /* if (temp <= 0 || temp >= 30) {
        std::cout << "The temperature is bad!";
    } else {
        std::cout << "The temperature is good!";
    } */


    // MARK: - And Logical Operator Example: '&&'

    /* if (temp > 0 && temp < 30) {
        std::cout << "The temperature is good!";
    } else {
        std::cout << "The temperature is bad!";
    } */

    return 0;


}