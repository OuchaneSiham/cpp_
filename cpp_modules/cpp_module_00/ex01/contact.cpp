/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 05:53:46 by souchane          #+#    #+#             */
/*   Updated: 2025/03/04 18:12:18 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <iostream>

std::string Contact::fields_name[5] =
{
	"First Name",
	"Last Name",
	"Nickname",
	"Phone Number",
	"Darkest Secret"
};


Contact::Contact()
{
	for (int i = FirstName; i <= DarkestSecret; i++)
		this->infos[i] = std::string();
	return;
}

Contact::~Contact()
{
}

bool	Contact::setting_of_conts()
{
	for (int i = FirstName; i <= DarkestSecret; i++)
	{
		std::cout << "enter the " << Contact::fields_name[i] << ":\n+";
		while ( !(std::getline(std::cin, this->infos[i])) || this->infos[i].length() == 0)
		{
			if (std::cin.eof() == true)
			{
				std::cout << "You Pressed ^D. Exiting phonebook now." << std::endl;
				std::exit(0);
			}
			else if (this->infos[i].length() == 0)
			{
				this->infos[i].clear();
				std::cout << "\033[31mthis is empty .\033[0m" << std::endl;
				std::cout << "enter the " << Contact::fields_name[i] << ":\n+";
			}
		}
	}
	std::cout << "\033[32mContact added successfully.\033[0m" << std::endl;
	return (true);
}

void	Contact::getting_of_conts(int index) const
{
	std::cout << "|" << std::setw(10) << index;
	for (int i = FirstName; i <= NickName; i++)
	{
		std::cout << "|";
		if (this->infos[i].length() > 10)
			std::cout << this->infos[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << this->infos[i];
	}
	std::cout << "|" << std::endl;
}
