//
//  Animals.hpp
//  ZooOblig3
//
//  Created by Øyvind Nordbø on 24/03/2024.
//

#ifndef Animals_hpp
#define Animals_hpp

#include <stdio.h>
#include <iostream>
#include <string>
//======================================================

//–––––––––––––––––––––––––––––––––––––ANIMAL Class––––––––––––––––––––––––––––––––––––––––––––––––

class Animal
{
public:
    //default funksjonen
    Animal();
    //Overloaded constructor
    Animal(std::string name, std::string species,
         unsigned int weight, std::string movement);
    //destructor
    ~Animal();
    
    void print();

 

    //Accessor functions
    
    //Getter's
    std::string get_name();
    //bool get_sex();
    std::string get_species();
    unsigned int get_weight();
    std::string get_movement();
    

private:
    //Member variables
    std::string its_name;
    std::string its_species;
    unsigned int its_weight;
    std::string its_movement;

    static inline int animal_count{ 0 };
};


//–––––––––––––––––––––––––––––––––––––Mammal Class––––––––––––––––––––––––––––––––––––––––––––––––
class Mammal : public Animal
{
public:
    Mammal();
    Mammal(std::string name, std::string species, unsigned int weight, std::string movement);

    
private:
};

//–––––––––––––––––––––––––––––––––––––Bird Class––––––––––––––––––––––––––––––––––––––––––––––––––
class Bird : public Animal
{
public:
    Bird();
    Bird(std::string name, std::string species, unsigned int weight, std::string movement);

private:
};

//–––––––––––––––––––––––––––––––––––––Fish Class––––––––––––––––––––––––––––––––––––––––––––––––––
class Fish : public Animal
{
public:
    Fish();
    Fish(std::string name, std::string species, unsigned int weight, std::string movement);

private:
};


//======================================================
 
#endif /* Animals_hpp */
