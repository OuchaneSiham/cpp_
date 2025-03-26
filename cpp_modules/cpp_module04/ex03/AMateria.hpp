/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 13:30:08 by souchane          #+#    #+#             */
/*   Updated: 2025/03/15 18:39:19 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// AMateria.hpp
#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>

class ICharacter;
class AMateria 
{
protected:
    std::string type;
public:
    AMateria(std::string const & type);
    AMateria(const AMateria& other);
    AMateria& operator=(const AMateria& other);
    virtual ~AMateria();
    std::string const & getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif
