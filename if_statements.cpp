#include <iostream>

int main(){

    //if statements = do something if a condition is true.
    //                if not, then dont do it.

    int age ;

    std::cout << "whats your name: ";
    std::cin >> age;

    if (age > 100)
    {
        std::cout << "You are too old to enter this site: ";
    }
    else if(age < 0){
        std::cout << "You Haven`t been born yet";
    }
    else if (age >= 18){
        std::cout << "Welcome to the site: ";
    }
    
    else{
        std::cout << "You not old enough to enter";
    }
      

    return 0;
}