//
//  main.cpp
//  ZooOblig3
//
//  Created by Øyvind Nordbø on 24/03/2024.
//

//—————Header files———————
#include "Animals.hpp" //
#include "Zoo.hpp"
//———————————————————

//——————Libraries————————
#include <iostream>
#include <vector>
//———————————————————

int main()
{

    Mammal Lion("Lion", "Mammal", 80, "Walks");

    Lion.print();
    
    std::cout << "Name is: " << Lion.get_name() << std::endl;
    
    
    Bird Parrot("Birger", "s", 0.325, "Flies");
    Parrot.print();
    
    std::cout << "PARROT NAME IS: " << Parrot.get_name() << std::endl;
    
    
}

