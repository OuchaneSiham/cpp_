/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 13:30:29 by souchane          #+#    #+#             */
/*   Updated: 2025/03/15 19:43:57 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria 
{
public:
    Cure();
    Cure(const Cure& other);
    Cure& operator=(const Cure& other);
    virtual ~Cure();

    virtual AMateria* clone() const;
    virtual void use(ICharacter& target);
};

#endif