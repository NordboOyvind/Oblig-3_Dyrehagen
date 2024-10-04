//
//  Zoo.hpp
//  ZooOblig3
//
//  Created by Øyvind Nordbø and August Henninen on 04/03/2024.
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
    Zoo();
    ~Zoo(){};
    std::vector<std::unique_ptr<Animal>> animal_list;
    void add_animal(Animal* animal);
    bool remove_animal(Animal* animal);
    bool get_animal_list();
    
    int get_animal_count() const;

    std::string print_species();

    
private:
    unsigned long animals_index;
    
};

#endif /* Zoo_hpp */

