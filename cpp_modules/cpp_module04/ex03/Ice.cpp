/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 13:41:28 by souchane          #+#    #+#             */
/*   Updated: 2025/03/15 19:43:24 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice") 
{
}

Ice::Ice(const Ice& other) : AMateria(other) 
{
}

Ice& Ice::operator=(const Ice& other)
 {
    if (this != &other) 
    {
        AMateria::operator=(other);
    }
    return *this;
}

Ice::~Ice() 
{
}

AMateria* Ice::clone() const 
{
    return new Ice(*this);
}

void Ice::use(ICharacter& target) 
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
