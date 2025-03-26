/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 15:48:00 by souchane          #+#    #+#             */
/*   Updated: 2025/03/15 09:02:32 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "dog got craeted" << std::endl;
}

Dog::Dog(const Dog& other)
{
	*this = other;
}
Dog& Dog::operator=(const Dog& other)
{
	if(this != &other)
		this->type = other.type;
	return (*this);
}
Dog:: ~Dog()
{
	std::cout << "this do got destroyed"<< std::endl;
}
void Dog::makeSound()const
{
	std::cout << "this is the sound of the dog" << std::endl;
}