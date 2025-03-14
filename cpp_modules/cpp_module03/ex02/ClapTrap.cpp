/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 04:31:02 by souchane          #+#    #+#             */
/*   Updated: 2025/03/14 02:26:02 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << this->name << " got created" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << this->name << " has been destroyed" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if(energyPoints > 0 && hitPoints > 0)
    {
        std::cout << "Claptrap " << this->name << " attacks " << target 
                  << ", causing " << attackDamage << " points of damage!" << std::endl;
        energyPoints--;
    }
    else
    {
        std::cout << "Claptrap " << this->name << " can't attack. No energy or hit points left!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    hitPoints -= amount;
    if (hitPoints < 0) hitPoints = 0;
    
    std::cout << "ClapTrap " << this->name << " takes " << amount 
              << " damage! Now at " << this->hitPoints << " HP." << std::endl;
              
    if(hitPoints == 0)
    {
        std::cout << "ClapTrap " << this->name << " is destroyed!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(energyPoints > 0 && hitPoints > 0)
    {
        hitPoints += amount;
        energyPoints--;
        std::cout << "ClapTrap " << this->name << " repairs itself for " 
                  << amount << " HP! Now at " << this->hitPoints << " HP." << std::endl;
    }
    else if (hitPoints == 0)
    {
        std::cout << "ClapTrap " << this->name << " is already destroyed and can't repair itself!" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << this->name << " has no energy left to repair!" << std::endl;
    }
}