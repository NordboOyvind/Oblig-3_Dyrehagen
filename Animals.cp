//
//  Animals.cpp
//  ZooOblig3
//
//  Created by Øyvind Nordbø and August Henninen on 04/03/2024.
//

#include "Animals.hpp"

#include <iostream>
#include <string>

//===================Animal Function Definitions==========================================================
//––––––Default constructor
Animal::Animal(){
    its_name = "Unknown";
    its_species = "Unknown";
    its_weight = 0;
    its_movement = "Unknown";
    
    std::cout << "Animal's default constructor called. A new unknown animal has been registered." << std::endl;
    std::cout << " " << std::endl;
}

//––––––Overloaded constructor (definisjon)
Animal::Animal(std::string name, std::string species, float weight, std::string movement)
    :its_name{name}, its_species{species}, its_weight{weight}, its_movement{movement}//->member initializer list
{
    animal_count++;
    std::cout << "Animal's nondefault constructor called. Success! You have registered a new animal with all of the required descriptions." << std::endl;
    std::cout << " " << std::endl;

}
//–––––––Destructor/definisjon
Animal::~Animal()
 {
 animal_count--;
 };

//––––––––––––––––Accessors functions (Getters)
std::string Animal::get_name() const {return its_name; }
std::string Animal::get_species() const {return its_species; }
float Animal::get_weight() const {return its_weight; }
std::string Animal::get_movement() const {return its_movement; }



//––––––––––––––––Set functions
void Animal::set_name(std::string name){ its_name = name; }
void Animal::set_species(std::string species){ its_species = species; }
void Animal::set_weight(float weight){ its_weight = weight; }
void Animal::set_movement(std::string movement){ its_movement = movement; }

void Animal::delete_animal(){animal_count--; } 

//––––––––––––Print function
void Animal::print_animal() const {
   std::cout<<"––––––––––––––––––––––––––––––––––––––––––––––––––"<< std::endl;
    std::cout << "Print constructor called" << std::endl;
    
    std::cout << "Name is: " << its_name << std::endl;
    std::cout << "Species is: " << its_species << std::endl;
    std::cout << "Weight is: " << its_weight << " kg's" << std::endl;
    std::cout << "Movement is: " << its_movement << std::endl;

    std::cout << " " << std::endl;
}

//–––Friend function, overload of <<
std::ostream& operator<<(std::ostream& output, const Animal& animal){
    
    output << "Name is, " << animal.get_name() << "." << std::endl;
    output << animal.get_name() << " is a " << animal.get_species() << ", weighs " << animal.get_weight() << " kg's"  << " and moves by " << animal.get_movement() << "." << std::endl;
    std::cout << " " << std::endl;
    return output;
}


//===================MAMMAL Function Definitions===================================================
Mammal::Mammal(): Animal() {} //bruker default funksjonen animal om igjen

Mammal::Mammal(std::string name, std::string species, float weight, std::string movement)
     : Animal(name, species, weight, movement) {} //Polymorfisme,

Mammal::~Mammal(){
    std::cout << "Mammal destructor called" << std::endl;
    std::cout << " " << std::endl;
    delete_animal();
}


//===================FISH Function Definitions=====================================================
Bird::Bird(): Animal() {}

Bird::Bird(std::string name, std::string species, float weight, std::string movement)
     : Animal(name, species, weight, movement) {}
Bird::~Bird(){
    std::cout << "Bird destructor called" << std::endl;
    std::cout << " " << std::endl;
    delete_animal(); }

//===================Bird Function Definitions=====================================================
Fish::Fish() : Animal() {}

Fish::Fish(std::string name,std::string species, float weight, std::string movement)
     : Animal(name, species, weight, movement) {}

Fish::~Fish(){ 
    std::cout << "Fish destructor called" << std::endl;
    std::cout << " " << std::endl;
    delete_animal(); }
