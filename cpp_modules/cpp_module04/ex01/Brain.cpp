/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 09:41:30 by souchane          #+#    #+#             */
/*   Updated: 2025/03/15 21:50:45 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Brain.cpp
#include "Brain.hpp"

Brain::Brain() 
{
    std::cout << "Brain created" << std::endl;
    for (int i = 0; i < 100; i++) 
    {
        ideas[i] = "Idea #" + std::to_string(i);
    }
}

Brain::Brain(const Brain& other) 
{
    std::cout << "Brain copied" << std::endl;
    *this = other;
}

Brain& Brain::operator=(const Brain& other) 
{
    std::cout << "Brain assignment operator" << std::endl;
    if (this != &other)
     {
        for (int i = 0; i < 100; i++) 
        {
            this->ideas[i] = other.ideas[i];
        }
    }
    return *this;
}

Brain::~Brain() 
{
    std::cout << "Brain destroyed" << std::endl;
}

void Brain::setIdea(int index, const std::string& idea) 
{
    if (index >= 0 && index < 100)
        ideas[index] = idea;
}

std::string Brain::getIdea(int index) const 
{
    if (index >= 0 && index < 100)
        return ideas[index];
    return "";
}