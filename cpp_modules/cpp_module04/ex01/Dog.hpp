/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 15:46:58 by souchane          #+#    #+#             */
/*   Updated: 2025/03/15 21:51:49 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Dog.hpp (updated)
#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal 
{
private:
    Brain* brain;
    
public:
    Dog();
    Dog(const Dog& other);
    Dog& operator=(const Dog& other);
    ~Dog();
    
    void makeSound() const;
    Brain* getBrain() const;
};

#endif