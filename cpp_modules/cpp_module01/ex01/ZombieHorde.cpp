/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 22:05:45 by souchane          #+#    #+#             */
/*   Updated: 2025/03/02 22:21:41 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie *zombieHord(int N, std::string str)
{
    Zombie *zombies = new Zombie[N];
    int i = 0;
    while(i < N)
    {
        zombies[i].getstring(str);
        i++;
    }
    return zombies;
}
