/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 15:48:59 by souchane          #+#    #+#             */
/*   Updated: 2025/03/15 21:51:59 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
WrongCat::WrongCat() : WrongAnimal()
{
    type = "WrongCat";
    std::cout << "wrong cat have been created" << std::endl;
}

WrongCat:: WrongCat(const WrongCat& other)
{
    *this = other;
    std::cout << "wrong cat got copied " << std::endl;
}
WrongCat& WrongCat::operator=(const WrongCat& other)
{
    if(this != &other)
    {
        this->type = other.type;
    }
    return (*this);
}
WrongCat::~WrongCat()
{
    std::cout << " wrong cat got destroyed" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "some wrong cat  sound"<< std::endl;
}
