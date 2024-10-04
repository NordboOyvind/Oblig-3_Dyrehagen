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
    friend class Zoo;
    friend std::ostream& operator<<(std::ostream& output, const Animal& animal);
    //default constructor
    Animal();//kunne evt gitt konstruktøren under default argumenter, men ville beholde printen slik at en er sikker på at objektet har fått default verdiene eller ikke utenom å bruke en if sjekk i funksjoen
    
    //Constructor
    Animal(std::string name, std::string species,
         unsigned int weight, std::string movement);
    //Destructor
   virtual ~Animal();
    
    void print() const;
    
    //Accessor functions (Getters)
    std::string get_name() const;
    std::string get_species() const;
    unsigned int get_weight() const;
    std::string get_movement() const;
    
    int get_AnimalCount() const;
    
   
    
    //Set functions (Setters)
    void set_name(std::string name);
    void set_species(std::string species);
    void set_weight(unsigned int weight);
    void set_movement(std::string movement);
    

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
    explicit Mammal();
    Mammal(std::string name, std::string species, unsigned int weight, std::string movement);
    virtual ~Mammal();
    
private:
    static inline int mammal_count{ 0 };
};

//–––––––––––––––––––––––––––––––––––––Bird Class––––––––––––––––––––––––––––––––––––––––––––––––––
class Bird : public Animal
{
public:
   explicit Bird();
    Bird(std::string name, std::string species ,unsigned int weight, std::string movement);

private:
    static inline int bird_count{ 0 };
};

//–––––––––––––––––––––––––––––––––––––Fish Class––––––––––––––––––––––––––––––––––––––––––––––––––
class Fish : public Animal
{
public:
    explicit Fish();
    Fish(std::string name, std::string species, unsigned int weight, std::string movement);

private:
    static inline int fish_count{ 0 };
};


//======================================================
 
#endif /* Animals_hpp */
