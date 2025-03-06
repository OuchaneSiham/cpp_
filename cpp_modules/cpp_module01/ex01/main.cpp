/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 21:31:21 by souchane          #+#    #+#             */
/*   Updated: 2025/03/02 22:28:18 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie *newZombie(int N, std::string name);
int main(void)
{
    int i = 0;
    int maxsizeofzombies = 20;
    // Zombie *zombie1 = newZombie("souchane");
    Zombie  *zombies = zombieHord(maxsizeofzombies, "souchane");
    while(i < maxsizeofzombies)
    {
        zombies[i].announce();
        i++;
    }
    delete [] zombies;
    return 0;
}
