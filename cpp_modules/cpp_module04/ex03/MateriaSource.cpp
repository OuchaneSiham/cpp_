/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 14:05:23 by souchane          #+#    #+#             */
/*   Updated: 2025/03/15 19:53:04 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() 
{
    for (int i = 0; i < 4; i++) 
    {
        templates[i] = NULL;
    }
}

MateriaSource::MateriaSource(const MateriaSource& other) 
{
    for (int i = 0; i < 4; i++) 
    {
        templates[i] = NULL;
        if (other.templates[i] != NULL) 
        {
            templates[i] = other.templates[i]->clone();
        }
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) 
{
    if (this != &other) 
    {
        for (int i = 0; i < 4; i++) 
        {
            if (templates[i] != NULL) 
            {
                delete templates[i];
                templates[i] = NULL;
            }
        }
        for (int i = 0; i < 4; i++) 
        {
            if (other.templates[i] != NULL) 
            {
                templates[i] = other.templates[i]->clone();
            }
        }
    }
    return *this;
}

MateriaSource::~MateriaSource() 
{
    for (int i = 0; i < 4; i++) 
    {
        if (templates[i] != NULL) 
        {
            delete templates[i];
        }
    }
}

void MateriaSource::learnMateria(AMateria* m) 
{
    if (m == NULL) 
    {
        return;
    }
    
    for (int i = 0; i < 4; i++) 
    {
        if (templates[i] == NULL) 
        {
            templates[i] = m;
            return;
        }
    }
    delete m;
}

AMateria* MateriaSource::createMateria(std::string const & type) 
{
    for (int i = 0; i < 4; i++) 
    {
        if (templates[i] != NULL && templates[i]->getType() == type) 
        {
            return templates[i]->clone();
        }
    }
    return NULL;
}
