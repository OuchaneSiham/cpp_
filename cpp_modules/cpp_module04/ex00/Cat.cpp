/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 15:42:57 by souchane          #+#    #+#             */
/*   Updated: 2025/03/15 09:15:45 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat got craeted" << std::endl;
}

Cat::Cat(const Cat& other)
{
	*this = other;
}
Cat& Cat::operator=(const Cat& other)
{
	if(this != &other)
		this->type = other.type;
	return (*this);
}
Cat:: ~Cat()
{
	std::cout << "this cat have been destroyed"<< std::endl;
}
void Cat::makeSound()const
{
	std::cout << "this is the sound of the Cat" << std::endl;
}