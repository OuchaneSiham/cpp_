/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 13:31:07 by souchane          #+#    #+#             */
/*   Updated: 2025/03/15 21:55:50 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

// #include "/Users/souchane/Desktop/cpp04/ex04/IMateriasource.hpp"
#include "IMateriasource.hpp"

class MateriaSource : public IMateriaSource 
{
private:
    AMateria* templates[4];
public:
    MateriaSource();
    MateriaSource(const MateriaSource& other);
    MateriaSource& operator=(const MateriaSource& other);
    virtual ~MateriaSource();

    virtual void learnMateria(AMateria* m);
    virtual AMateria* createMateria(std::string const & type);
};

#endif
