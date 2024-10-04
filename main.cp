//
//  main.cpp
//  ZooOblig3
//
//  Created by Øyvind Nordbø and August Henninen on 04/03/2024.
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
    Zoo myZoo;

    Mammal* p_mammal1 = new Mammal("Lars", "Lion", 120, "running");
    myZoo.add_animal(p_mammal1);
    
    Mammal* p_mammal2 = new Mammal("Ola", "Lion", 140, "running");
    myZoo.add_animal(p_mammal2);
    
    Mammal* p_mammal3 = new Mammal("Kris", "Lion", 160.0, "running");
    myZoo.add_animal(p_mammal3);
    
    Mammal* p_mammal4 = new Mammal("Marcus", "Lion", 140, "running");
    myZoo.add_animal(p_mammal4);
    
    
    Bird* p_bird1 = new Bird("Birger", "Parrot", 0.250, "flying");
    myZoo.add_animal(p_bird1);
    
    Bird* p_bird2 = new Bird("Kristian", "Parrot", 0.240, "flying");
    myZoo.add_animal(p_bird2);
   
    Bird* p_bird3 = new Bird("Sondre", "Eagle", 0.250, "flying");
    myZoo.add_animal(p_bird3);
    
    Bird* p_bird4 = new Bird("Arild", "Eagle", 0.242, "flying");
    myZoo.add_animal(p_bird4);
    
    Fish* p_fish1 = new Fish("Nemo", "Hai", 102, "swimming");
    myZoo.add_animal(p_fish1);
    
    Fish* p_fish2 = new Fish("Sander", "Sealion", 333, "swimming");
    myZoo.add_animal(p_fish2);
    
    Fish* p_fish3 = new Fish("Sondre", "Sealion", 444, "swimming");
    myZoo.add_animal(p_fish3);
    
    Fish* p_fish4 = new Fish("Oliver", "Sealion", 555, "swimming");
    myZoo.add_animal(p_fish4);
    
    //La på kommunikasjon med brukeren, slik at du selv skriver inn gruppen du søker opp
    myZoo.print_species();
    
    p_mammal1->set_name("Niels");
    std::cout << "Did the name get changed? -->" << p_mammal1->get_name() << std::endl;
    std::cout << "Here is its movement: " << p_mammal1->get_movement() << std::endl;
      
  
    myZoo.get_animal_list();
    
    std::cout << "Number of animals in this zoo is:" << myZoo.get_animal_count() << std::endl;
    myZoo.remove_animal(p_mammal1);
    

}




