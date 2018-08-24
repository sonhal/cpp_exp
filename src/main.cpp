#include <iostream>
#include "utilities.h"
using namespace std;

int main() {
    cout << "Hello!" << endl;
    
    Joker j = Joker("Sondre");
    j.laugh();
    
    std::cout << j.getJoke() << std::endl;
    return 0;
}

