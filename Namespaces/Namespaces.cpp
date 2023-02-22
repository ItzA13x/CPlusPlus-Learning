#include <iostream>

// A namespace provides a solution for preventing name conflicts
// in large projects. Each entity needs a unique name.
// A namespace allows fore identically named entities
// as long as the namespaces are different.




namespace first{

    int x = 1;

}

namespace second{
    int x = 2;
}

int main(){
    using namespace first; 
    using namespace std; // You can use namespace std to save time typing std before ::cout every time
                         // But std has many many entities which could cause name conflicts

    using std::cout; // You can use these 2 lines instead to specify what entity you want to use
    using std::string; // Therefore, lowering the chances of a conflict

    cout << first::x << '\n';
    cout << second::x << '\n';

    return 0;
}