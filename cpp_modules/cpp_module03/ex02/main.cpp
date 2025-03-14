/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 07:56:25 by souchane          #+#    #+#             */
/*   Updated: 2025/03/14 02:24:56 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
int main()
{
    ScavTrap scav("souchane");
    scav.attack("alpha");
    scav.takeDamage(20);
    scav.beRepaired(10);
    scav.guardGate(); 
    FragTrap frag("siham");
    frag.attack("beta");
    frag.takeDamage(20);
    frag.beRepaired(10);
    frag.highFivesGuys();

    return 0;
}