#include <iostream>

int main(){

    // switch = alternative to using many "else if" statements
    //          compare one value against matching cases

    char grade;

    std::cout << "Enter your grade (A-C)";
    std::cin >> grade;

    switch (grade)
    {
    case 'A':
        std::cout << "Your grade is A";
        break;
    case 'B':
        std::cout << "Your grade is B";
        break;
    case 'C':
        std::cout << "Your grade is C";
        break;
    default:
        std::cout << "You grade is not avalible now";
        break;
    }

    return 0;
}