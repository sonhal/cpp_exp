
#include <iostream>
#include <string>

class Joker {
private:
    std::string name;
    
public:
    Joker(std::string name){this->name = name;}
    
    void laugh(){std::cout << "HAHAHA" << std::endl;}
    
    std::string getJoke(){return "Classic joke from " + this->name;}
    
    ~Joker(){}
    
};