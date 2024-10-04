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
    
    Animal Animals; //fungerer fordi vi ikke øker animal count i default konstruktør, burde kontrolleres med -1 eller finne en bedre løsning //siste slides, klasser
    
    Mammal Lion("Simba", "Lion", 160, "Walking");

    Lion.set_name("Simon");
    /*
    std::cout << "Name is: " << Lion.get_name() << std::endl;
    
    FUNGERER
    Bird Parrot("Birger", 0.325, "Flies"); //Nå fjernet species i definisjon da kontrukt av Bird tar dette med
    Parrot.print();
    
    std::cout << "PARROT NAME IS: " << Parrot.get_name() << std::endl;
    
    
    std::cout << Lion.get_movement() << std::endl;
    
    Mammal* p_Birger = new Mammal("Birger", "Parrot", 800, "Walks");
    
    std::cout << (*p_Birger).get_species() << std::endl;
    
    std::cout << Animals.get_AnimalCount() << std::endl;
    
    //std::cout << << std::endl;
    */
    std::cout << Lion << std::endl;
}




