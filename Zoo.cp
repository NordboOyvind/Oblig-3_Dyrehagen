//
//  Zoo.cpp
//  ZooOblig3
//
//  Created by Øyvind Nordbø and August Henninen on 04/03/2024.
//

#include "Zoo.hpp"
#include "Animals.hpp"
//––––Zoo default constructer
Zoo::Zoo(){}


//––––----––Add to list
void Zoo::add_animal(Animal* animal){
    animal_list.push_back(std::unique_ptr<Animal>(animal));
    
    std::cout<< animal->get_name() << " was succesfully added to the Zoo." << std::endl;
}

//–––––––––Remove from list
bool Zoo::remove_animal(Animal* animal){
    if(animal_list.size() <= 0){
        return 0; //Hindrer at programmet kjører gjennom en tom liste
    }
    int index{0};
    for(int i = 0; i < animal_list.size(); ++i){ //finner indexen til dyret vi vil fjerne
        if(animal_list[i].get() == animal ){
            index = i;
            break;
        }
    }
    if(animal_list[index].get() == animal){
        std::cout << animal->get_name() << " was succesfully removed from the Zoo." << std::endl;
        animal_list.erase(animal_list.begin() + index);
        animal = nullptr;
        delete animal;
    }
    else{std::cout << "The animal could not be found" << std::endl; return 0;}
    
    return 1;
}

//–––––––––Print list
bool Zoo::get_animal_list(){
    if(animal_list.size() == 0){return 0;}
    std::cout << "––––––––––––––––––––––––––––––––––––––––––––––––––" << std::endl;
    std::cout << "Here is the list of all the Animals: " << std::endl;
    for (int i = 0; i < animal_list.size(); ++i){
        std::cout << "Animal number " << i + 1 << ", is:" << std::endl;
        std::cout << "Name: " <<animal_list[i]->its_name << std::endl;
        std::cout << "Species: " <<animal_list[i]->its_species << std::endl;
        std::cout << "Weight: "<<animal_list[i]->its_weight << std::endl;
        std::cout << "Moves by: " << animal_list[i]->its_movement << std::endl;
        std::cout << "" << std::endl;
    }
    
    std::cout << "––––––––––––––––––––––––––––––––––––––––––––––––––" << std::endl;
    std::cout << "" << std::endl;
    return 1;
}



int Zoo::get_animal_count() const {return Animal::animal_count; }

//–––––––––Print species
std::string Zoo::print_species(){
    std::string species;
    std::cout << "Enter the name of the Animal group: " << std::endl;
    std::cin >> species;
    
    std::cout << "––––––––––––––––––––––––––––––––––––––––––––––––––" << std::endl;
    std::cout << "Searching for " << species << "'s..." << std::endl;
    int count{0};
    
    for (int i = 0; i < animal_list.size(); ++i){
        if(animal_list[i]->get_species() == species){
            std::cout << "" << std::endl;
            std::cout << animal_list[i]->its_name << std::endl;
            std::cout << animal_list[i]->its_species << std::endl;
            std::cout << animal_list[i]->its_weight << std::endl;
            std::cout << animal_list[i]->its_movement << std::endl;
            count++;
        }
        else if(count <= 0){
            std::cout << "No animals in group: '" + species << "'" << std::endl;
            std::cout << " " << std::endl;
            return species;
        }
    }
    std::cout << "––––––––––––––––––––––––––––––––––––––––––––––––––" << std::endl;
    std::cout << "There is a total of " << count << " '" << species << "'s' in this Zoo." << std::endl;
    std::cout << " " << std::endl;
    return species;
}

