/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 03:35:03 by souchane          #+#    #+#             */
/*   Updated: 2025/03/04 18:20:18 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
phonebook::phonebook(void)
{
    this->i = 0;
    this->is_full = false;
    return;
}
phonebook::~phonebook(void)
{
    return;
}
void phonebook::setting_of_infos(void)
{
    std::string user_input;
    if(this->is_full == false)
    {
        std::cout << "ur contact is "<< this->i + 1 << std::endl;
        if(this->contacts[this->i].setting_of_conts() == true)
        {
            if(this->i == 7)
                this->is_full = true;
            else
                this->i++;
        }
    }
    else
    {
        std::cout << "you cant add new contacts\nif u want so, m gonna delete the first contact." << std::endl;
		std::cout << "If you want to proceed, press '1' and click on 'enter',\nif not press anything but '1' and confirm with 'enter' to go back to main menu." << std::endl;
		std::cout << "your bisnuss: ";
        getline(std::cin, user_input);
        if(std::cin.eof() == true)
        {
            std::cout << "u clicked on ^D. we gonan exit the phonebook now." << std::endl;
			std::exit(0);
        }
        else if(user_input.compare("1") == 1)
        {
            int j = 0;
            while(j < 8)
            {
                this->contacts[i - 1] = this->contacts[j];
                j++;
            }
            std::cout << "ur contact is #8" << std::endl;
            this->contacts[this->i].setting_of_conts();
        }
        else
            std::cout << "back to the menu withoout clearing a contact" << std::endl;
    }
}
void phonebook::getting_of_infos(void)const
{
    int position;
    if(this->i == 0)
        std::cout << "\033[95m add a contact before the search command\033[0m" << std::endl;
    else
    {
        std::string users_input;
        std::cout <<" whats the contact that u wanna discover. type '0' to ext searching process\n";
        while (!(std::getline(std::cin, users_input)) || users_input.length() > 1 || users_input.compare("0") < 0 || users_input.compare("8") > 0 || (std::atoi(users_input.c_str()) -1 >= this->i && this->is_full == false))
		{
			if (std::cin.eof() == true)
			{
				std::cout << "u typed ^D , we gonna exit the phonebooke" << std::endl;
				std::exit(0);
			}
			else if (users_input.length() > 1 || users_input.compare("0") < 0 || users_input.compare("8") > 0)
			{
				std::cin.clear();
				std::cout << "\033[36monly digits required here in this range.\033[0m\n";
				std::cout << "which contact u wanna discover)\nposition";
			}
			else if (std::atoi(users_input.c_str()) - 1 >= this->i && this->is_full == false)
			{
				std::cout << "\033[33mYou only have " << this->i << " Contacts saved.\033[0m" << std::endl;
				std::cin.clear();
				std::cout << "which contact u wanna discover\n position";
			}
		}
		position = std::atoi(users_input.c_str());
		if (position > 0)
		{
			std::cout << "|-------------------------------------------|" << std::endl;
			std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
			std::cout << "|----------|----------|----------|----------|" << std::endl;
			this->contacts[position - 1].getting_of_conts(position);
			std::cout << "|-------------------------------------------|" << std::endl;
		}
		else
			std::cout << "we gonna exit the search mode" << std::endl;
    }
}
void phonebook::rules(void)
{
    std:: cout << "\033[KEnter ur command [[ADD, SEARCH, EXIT]]::"<< std::endl;
}