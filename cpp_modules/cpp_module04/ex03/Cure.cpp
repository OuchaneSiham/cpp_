/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 13:44:59 by souchane          #+#    #+#             */
/*   Updated: 2025/03/15 19:44:31 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure") 
{
}

Cure::Cure(const Cure& other) : AMateria(other) 
{
}

Cure& Cure::operator=(const Cure& other) 
{
    if (this != &other) 
    {
        AMateria::operator=(other);
    }
    return *this;
}

Cure::~Cure() 
{
}

AMateria* Cure::clone() const 
{
    return new Cure(*this);
}

void Cure::use(ICharacter& target) 
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}