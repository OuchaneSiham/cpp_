/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 15:42:07 by souchane          #+#    #+#             */
/*   Updated: 2025/03/15 13:22:06 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():type("animal")
{
    std::cout << "animal have been created" << std::endl;
}
Animal:: Animal(const Animal &other)
{
    *this = other;
    std::cout << "Animal got copied " << std::endl;
}
Animal& Animal::operator=(const Animal& other)
{
    if(this != &other)
    {
        this->type = other.type;
    }
    return (*this);
}
Animal::~Animal()
{
    std::cout << " Animal got destroyed " << std::endl;
}
std::string Animal::getType() const

{
    return(type);
}
