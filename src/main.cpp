#include <iostream>
#include "utilities.h"
#include "tester.h"
using namespace std;

int main() {
    cout << "Hello!" << endl;
    
    Joker j = Joker("Sondre");
    j.laugh();
    
    std::cout << j.getJoke() << std::endl;
    
    Tester t = Tester();
    t.runTest();
    return 0;
}

