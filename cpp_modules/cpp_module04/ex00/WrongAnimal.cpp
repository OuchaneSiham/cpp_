/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 15:48:43 by souchane          #+#    #+#             */
/*   Updated: 2025/03/15 09:04:32 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
WrongAnimal::WrongAnimal():type("wrong animal")
{
    std::cout << "wrong animal have been created" << std::endl;
}
WrongAnimal:: WrongAnimal(const WrongAnimal& other)
{
    *this = other;
    std::cout << "wrong Animal got copied " << std::endl;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    if(this != &other)
    {
        this->type = other.type;
    }
    return (*this);
}
WrongAnimal::~WrongAnimal()
{
    std::cout << " wrong animal got destroyed" << std::endl;
}
std::string WrongAnimal::getType() const
{
    return(type);
}

void WrongAnimal::makeSound() const
{
    std::cout << "some wrong animal sound"<< std::endl;
}
