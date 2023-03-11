#include <iostream>

#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t; C++ pair is a type that is specified under the utility> header and is used to connect two pair values
//typedef std::string text_t;
//typedef int number_t;
using text_t = std::string;
using number_t = int;


int main(){

    //Typedef = reserved keyword used to create an additiional name
    //          (alias) for another data type.
    //          New identifier for an existing type
    //          Helps with readbility and reduces typos
    //          Use when there is a clear benifit
    //          replaced with USING (work better w\ templates)



    text_t firstName = "Max";
    number_t age = 5;

    std::cout << firstName << '\n';
    std::cout << age << '\n'; 
      
    return 0;
}