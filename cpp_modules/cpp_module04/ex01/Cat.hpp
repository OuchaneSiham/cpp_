/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 15:42:35 by souchane          #+#    #+#             */
/*   Updated: 2025/03/15 21:51:18 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Cat.hpp (updated)
#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal 
{
private:
    Brain* brain;
    
public:
    Cat();
    Cat(const Cat& other);
    Cat& operator=(const Cat& other);
    ~Cat();
    
    void makeSound() const;
    Brain* getBrain() const;
};

#endif