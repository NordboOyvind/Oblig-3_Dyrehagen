//
//  Zoo.hpp
//  ZooOblig3
//
//  Created by Øyvind Nordbø on 24/03/2024.
//

#ifndef Zoo_hpp
#define Zoo_hpp

#include <stdio.h>
#include "Animals.hpp"
#include <vector>

//–––––––––––––––––––––––––––––––––––––Zoo Class–––––––––––––––––––––––––––––––––––––––––––––––––––

class Zoo //skal representere dyrehagen, holde oversikt over alle dyrene
{
public:
    //1. funksjon som presenterer alle dyr, overlastning av << operatoren
    //Overload of << on a class object (declaration)
    std::vector<Animal*> animal_list;
    void add_animal(Animal*);
    void remove_animal(Animal*);
    
    // Pekere av disse objektene, lagres i en vektor
    //skal kunne skrive ut alle dyrene i en gruppe
    
private:
    
};

#endif /* Zoo_hpp */


