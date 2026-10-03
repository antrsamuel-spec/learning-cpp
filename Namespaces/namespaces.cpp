#include <iostream>

//Namespace = provides a solution for preventing name conflicts in larger projects.
//            each entity needs a unique name.
//            a name space allows for identically named entities, as long as the namespaces are different.

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main() {
    
    //using namespace first; 

    std::cout << second::x;

    //std::cout << x;         only when using namespace "namespace"

    return 0;
}
