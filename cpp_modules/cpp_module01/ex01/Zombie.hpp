/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 22:07:04 by souchane          #+#    #+#             */
/*   Updated: 2025/03/02 22:21:32 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <algorithm>
class Zombie
{
    private:
        std::string s;
    public:
        Zombie(std::string str);
        Zombie(void);
        ~Zombie(void);
        void announce(void);
        void getstring(std::string str);
};
Zombie *zombieHord(int N, std::string str);
// this function creates a horde of zombies, names them, and returns them so you can use them outside
void randomChump(std::string name);
// this function creates a zombie, names it, and makes it announce itself.
#endif
