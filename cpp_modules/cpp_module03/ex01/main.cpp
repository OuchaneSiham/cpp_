/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 07:56:25 by souchane          #+#    #+#             */
/*   Updated: 2025/03/14 02:24:33 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav("siham");

    scav.attack("alpha_target");
    scav.takeDamage(30);
    scav.beRepaired(50);
    scav.guardGate();

    return 0;
}
