
#include <iostream>

int main() {

    // MARK: - Key Notes
        // Ternary Operator ?: = replacement to an if/else statement
        // 'CONDITION' ? 'Expression1' : 'Expression2'

    

    int grade = 75;

    // Refactor Version with Ternary Operator:

    grade >= 60 ? std::cout << "You pass!" : std::cout << "You failed!";

    // First Example:

    /* if (grade >= 60) {
        std::cout << "You pass!";
    } else {
        std::cout << "You fail!";
    } */
    
    return 0;

}