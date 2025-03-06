/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 20:59:28 by souchane          #+#    #+#             */
/*   Updated: 2025/03/02 22:25:28 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

/* Zombie Class definition *//* Zombie Class definition */
class	Zombie
{
	private:
		std::string	str;
	public:
		Zombie(std::string name);
		~Zombie(void);
		void	announce(void);
};

#endif
