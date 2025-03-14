/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 07:38:23 by souchane          #+#    #+#             */
/*   Updated: 2025/03/14 02:24:15 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
int main() 
{
    ClapTrap clap("souchane");
    clap.attack("alpha");
    clap.takeDamage(5);
    clap.beRepaired(3);
    clap.attack("beta");
    
    return 0;
}
