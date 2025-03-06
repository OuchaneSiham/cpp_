/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 20:59:18 by souchane          #+#    #+#             */
/*   Updated: 2025/03/02 21:04:56 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
// lets allocate to the stack
// this function creates a zombie, names it, and makes it announce itself.
// The zombie is allocated on the stack.
// The zombie is destroyed when the function ends.
void randomChump(std::string name)
{
    Zombie Z = Zombie(name);
    Z.announce();
}
