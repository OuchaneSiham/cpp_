/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 15:48:00 by souchane          #+#    #+#             */
/*   Updated: 2025/03/15 21:51:46 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Dog.cpp (updated)
#include "Dog.hpp"

Dog::Dog() 
{
    type = "Dog";
    brain = new Brain();
    std::cout << "Dog created" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) 
{
    std::cout << "Dog copied" << std::endl;
    this->brain = new Brain(*other.brain); 
}

Dog& Dog::operator=(const Dog& other) 
{
    std::cout << "Dog assignment operator" << std::endl;
    if (this != &other) 
    {
        Animal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain); 
    }
    return *this;
}

Dog::~Dog() 
{
    delete brain;
    std::cout << "Dog destroyed" << std::endl;
}

void Dog::makeSound() const 
{
    std::cout << "Woof woof!" << std::endl;
}

Brain* Dog::getBrain() const 
{
    return brain;
}