/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 22:10:33 by souchane          #+#    #+#             */
/*   Updated: 2025/03/02 22:17:17 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie::Zombie(std::string name)
{
	this->s = name;
	std::cout << "Zombie " << this->s << " created" << std::endl;
}

Zombie::Zombie(void)
{
	this->s = "(null)";
	std::cout << "Zombie " << this->s << " created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->s << " destroyed" << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->s << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::getstring(std::string str)
{
	this->s = str;
}
