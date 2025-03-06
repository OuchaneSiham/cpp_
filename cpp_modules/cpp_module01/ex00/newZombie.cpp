/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 20:59:16 by souchane          #+#    #+#             */
/*   Updated: 2025/03/02 22:25:34 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// lets allocate to the heap
Zombie *newZombie(std::string name)
{
    Zombie *zombie = new Zombie(name);
    return(zombie);
}
