//
//  Zoo.cpp
//  ZooOblig3
//
//  Created by Øyvind Nordbø on 24/03/2024.
//

#include "Zoo.hpp"
#include "Animals.hpp"

//–––Friend function, overload of <<
std::ostream& operator<<(std::ostream& output, const Animal& animal){
    
    output << "Name is, " << animal.get_name() << "." << std::endl;
    output << animal.get_name() << " is a " << animal.get_species() << ", weighs " << animal.get_weight() << " kg"  << " and moves by " << animal.get_movement() << "." << std::endl;
    return output;
}
