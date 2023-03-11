#include <iostream>

namespace first{
    int x = 5;
}

namespace second{
    int x = 6;
}

int main() {
    //using namespace second;

    //std::cout << x;



    //Namespace = provides a solution proventing name conflicts.
    //            in large projects. Each entity needs a unique name.
    //            A namespaces allows for identically named entities.
    //            as long as the namespaces are different.
    
      
    //Other reason to put this line is saved code line, no is necesary put std::

    //using namespace std;

    //string name = "Halo";
    //cout << "Videogame " << name;
    
    
    //Other alternavite is put:
    using std::cout;
    using std::string;

    string movie = "No country for old man";
    cout << "The movie is: " << movie;
    
    return 0;
}