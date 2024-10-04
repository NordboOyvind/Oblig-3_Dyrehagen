//
//  Animals.cpp
//  ZooOblig3
//
//  Created by Øyvind Nordbø on 24/03/2024.
//

#include "Animals.hpp"

#include <iostream>
#include <string>

//===================Animal Function Definitions===================================================
//Default constructor (definisjon)
Animal::Animal(){
    its_name = "Unknown";
    its_species = "Unknown";
    its_weight = 0;
    its_movement = "Unknown";
    
    std::cout << "Animal's default constructor called. A new unknown animal has been registered\n";
}

//Overloaded constructor (definisjon)
Animal::Animal(std::string name, std::string species, unsigned int weight, std::string movement)
    :its_name{name}, its_species{species}, its_weight{weight}, its_movement{movement}//->member initializer list
{
    animal_count++;
    std::cout << "Animal's overloaded constructor called. Success! You have registered a new Animal with the required definitions\n";

}
//Overloaded destructor/definisjon

Animal::~Animal()
 {
 animal_count--;
    
    //        Animal* animalPtr = new Animal(); // Object is created on the heap
    //delete animalPtr; // Destructor will be called automatically when `delete` is called
 };


//––––––––––––––––Accessors

//––––––––––––––––Getters
std::string Animal::get_name(){ return its_name; }
std::string Animal::get_species(){ return its_species; }
unsigned int Animal::get_weight(){ return its_weight; }
std::string Animal::get_movement(){return its_movement; }

//print vil ikke fungere i andre klasser, ikke tilgang til its_ variablene direkte
void Animal::print() {
    std::cout << "Print constructor called" << std::endl;
    
    std::cout << "Name is: " << its_name << std::endl;
    std::cout << "Species is: " << its_species << std::endl;
    std::cout << "Weight is: " << its_weight << " kg's" << std::endl;
    std::cout << "Movement is: " << its_movement << std::endl;

    
}

//===================MAMMAL Function Definitions===================================================
Mammal::Mammal(): Animal() {} //bruker default funksjonen animal om igjen

Mammal::Mammal(std::string name, std::string species, unsigned int weight, std::string movement)
     : Animal(name, "Mammal", weight, movement) {} //bruker også den overloada funksjonen om igjen


//===================FISH Function Definitions=====================================================
Bird::Bird(): Animal() {}

Bird::Bird(std::string name, std::string species, unsigned int weight, std::string movement)
     : Animal(name, "Bird", weight, movement) {}


//===================Bird Function Definitions=====================================================
Fish::Fish() : Animal() {}

Fish::Fish(std::string name, std::string species, unsigned int weight, std::string movement)
     : Animal(name, "Fish", weight, movement) {}
