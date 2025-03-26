/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 14:02:33 by souchane          #+#    #+#             */
/*   Updated: 2025/03/15 19:49:29 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Character.hpp"
#include <iostream>

Character::Character(std::string const & name) : name(name) 
{
    for (int i = 0; i < 4; i++) 
    {
        inventory[i] = NULL;
    }
}

Character::Character(const Character& other) : name(other.name) 
{
    for (int i = 0; i < 4; i++) 
    {
        inventory[i] = NULL;
        if (other.inventory[i] != NULL) 
        {
            inventory[i] = other.inventory[i]->clone();
        }
    }
}

Character& Character::operator=(const Character& other) 
{
    if (this != &other) 
    {
        this->name = other.name;
        for (int i = 0; i < 4; i++) {
            if (inventory[i] != NULL) 
            {
                delete inventory[i];
                inventory[i] = NULL;
            }
        }
        for (int i = 0; i < 4; i++) 
        {
            if (other.inventory[i] != NULL) 
            {
                inventory[i] = other.inventory[i]->clone();
            }
        }
    }
    return *this;
}

Character::~Character() 
{
    for (int i = 0; i < 4; i++) 
    {
        if (inventory[i] != NULL) 
        {
            delete inventory[i];
        }
    }
}

std::string const & Character::getName() const 
{
    return this->name;
}

void Character::equip(AMateria* m) 
{
    if (m == NULL) 
    {
        return;
    }
    
    for (int i = 0; i < 4; i++) 
    {
        if (inventory[i] == NULL) 
        {
            inventory[i] = m;
            return;
        }
    }
}

void Character::unequip(int idx) 
{
    if (idx >= 0 && idx < 4 && inventory[idx] != NULL) 
    {
        inventory[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter& target) 
{
    if (idx >= 0 && idx < 4 && inventory[idx] != NULL) 
    {
        inventory[idx]->use(target);
    }
}
