#include <iostream>

int main(){

    // cout << (insertion operator)
    // cin >> (extraction operator)

    std::string name;
    int age;


    std::cout << "whats your age: ";
    std::cin >> age;
    
    std::cout << "what`s your full name: ";
    std::getline(std::cin >> std::ws, name);

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old" << '\n';

    return 0;
}