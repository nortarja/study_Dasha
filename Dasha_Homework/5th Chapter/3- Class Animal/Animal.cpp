#include "Animal.h"
#include <iostream>
#include <string>

void Cat::Voice() 
{
    std::cout << "Meow!" << std::endl;
}

void Dog::Voice()
{
    std::cout << "Woof!" << std::endl;
}

void Cow::Voice()
{
    std::cout << "Moo!" << std::endl;
}

