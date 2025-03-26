/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 11:38:09 by souchane          #+#    #+#             */
/*   Updated: 2025/03/15 08:56:11 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal 
{
protected:
    std::string type;
public:
    Animal();
    Animal(const Animal &other);
    virtual Animal& operator=(const Animal& other);
    virtual ~Animal();
    virtual void makeSound() const;
    std::string getType() const;
};

#endif