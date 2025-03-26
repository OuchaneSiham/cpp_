/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 13:35:30 by souchane          #+#    #+#             */
/*   Updated: 2025/03/15 19:41:57 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

AMateria::AMateria(std::string const & type) : type(type) 
{
}

AMateria::AMateria(const AMateria& other) : type(other.type)
 {
}

AMateria& AMateria::operator=(const AMateria& other) 
{
    if (this != &other) 
    {
        this->type = other.type;
    }
    return *this;
}

AMateria::~AMateria() 
{
}

std::string const & AMateria::getType() const 
{
    return this->type;
}

void AMateria::use(ICharacter& target) 
{
    (void)target;
}