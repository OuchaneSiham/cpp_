/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 03:27:38 by souchane          #+#    #+#             */
/*   Updated: 2025/03/04 06:02:55 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"
int main(void)
{
	phonebook 	PhoneBook;
	bool		run = true;
	std::string	command;

	PhoneBook.rules();
	std::cout << "\033[33m$>\033[0m";
	while (run && std::getline(std::cin, command))
	{
		if (std::cin.eof() == true)
		{
			std::cout << "You Pressed ^D. Exiting phonebook now." << std::endl;
			exit(0);
		}
		else if (command.compare("ADD") == 0)
			PhoneBook.setting_of_infos();
		else if (command.compare("SEARCH") == 0)
			PhoneBook.getting_of_infos();
		else if (command.compare("EXIT") == 0)
		{
			std::cout << "\033[34mHope i served you well. Good Bye.\033[0m" << std::endl;
			run = false;
			continue ;
		}
		command.clear();
		PhoneBook.rules();
		std::cout << "\033[33m$>\033[0m";
	}
	if (run)
	{
		std::cout << "You pressed ^D, exiting now." << command << std::endl
		<< "\033[34mHope i served you well. Good Bye.\033[0m" << std::endl;
	}
	return (0);
}