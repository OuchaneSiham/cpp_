/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 15:42:57 by souchane          #+#    #+#             */
/*   Updated: 2025/03/15 21:53:04 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Cat.cpp (updated)
#include "Cat.hpp"

Cat::Cat() 
{
    type = "Cat";
    brain = new Brain();
    std::cout << "Cat created" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) 
{
    std::cout << "Cat copied" << std::endl;
    this->brain = new Brain(*other.brain); 
}

Cat& Cat::operator=(const Cat& other) 
{
    std::cout << "Cat assignment operator" << std::endl;
    if (this != &other) 
    {
        Animal::operator=(other);
        delete brain; 
        brain = new Brain(*other.brain); 
    }
    return *this;
}

Cat::~Cat() 
{
    delete brain;
    std::cout << "Cat destroyed" << std::endl;
}

void Cat::makeSound() const 
{
    std::cout << "Meow meow!" << std::endl;
}

Brain* Cat::getBrain() const 
{
    return brain;
}