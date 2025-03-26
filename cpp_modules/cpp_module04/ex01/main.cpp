/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 08:40:21 by souchane          #+#    #+#             */
/*   Updated: 2025/03/15 09:44:41 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// main.cpp
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

#define NUM_ANIMALS 10

int main() {
    // Test basic functionality
    std::cout << "----- Basic Test -----" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    delete j; // should not create a leak
    delete i;
    
    // Test array of animals
    std::cout << "\n----- Array Test -----" << std::endl;
    Animal* animals[NUM_ANIMALS];
    
    // Create half dogs and half cats
    for (int i = 0; i < NUM_ANIMALS; i++) {
        if (i < NUM_ANIMALS / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    
    // Delete all animals
    for (int i = 0; i < NUM_ANIMALS; i++) {
        delete animals[i];
    }
    
    // Test deep copy
    std::cout << "\n----- Deep Copy Test -----" << std::endl;
    Dog* dog1 = new Dog();
    dog1->getBrain()->setIdea(0, "I love bones!");
    
    // Create a copy
    Dog* dog2 = new Dog(*dog1);
    
    // Modify original
    dog1->getBrain()->setIdea(0, "I love different bones!");
    
    // Check if copy was affected
    std::cout << "Original dog idea: " << dog1->getBrain()->getIdea(0) << std::endl;
    std::cout << "Copied dog idea: " << dog2->getBrain()->getIdea(0) << std::endl;
    
    delete dog1;
    delete dog2;
    
    return 0;
}