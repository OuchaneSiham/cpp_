/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 20:59:21 by souchane          #+#    #+#             */
/*   Updated: 2025/03/02 21:28:21 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
// Constructor
// what does constructor do?
// It initializes the object of the class.
// It is called automatically when the object is created.
// It is declared in the public section of the class.
// It does not have a return type.
// example:
Zombie::Zombie(std::string name)
{
	this->str = name;
	std::cout << "Zombie " << this->str << " is born" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->str << " destroyed" << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->str << " BraiiiiiiinnnzzzZ..." << std::endl;
}
