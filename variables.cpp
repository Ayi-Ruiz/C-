#include<iostream>

int main(){

    //integer(wohle numbers)
    int age = 25;
    int years = 2026;
    int days = 6;

    //double(number including decimal)
    double price = 20.26;
    double gpa = 5.6;
    double temperature = 25.6;

    //single characters
    char grade = 'A';
    char initial = 'C';
    char dollarSign = '$';

    //boolean(true or false)
    bool student = false;
    bool power = true;
    bool forSale = true;

    //string(objects that represents sequence of text)
    std::string name = "James";
    std::string school = "Harvard";
    std::string game = "Silent Hill";

    std::cout << "hello " << name << '\n';
    std::cout << "You are " << age << " years old" << '\n';
    std::cout << "You study in " << school << '\n';
    std::cout << "You game favorite is " << game << '\n';


    return 0;
}