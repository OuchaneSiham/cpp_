/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 08:40:21 by souchane          #+#    #+#             */
/*   Updated: 2025/03/15 09:22:43 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "Creating Animal objects..." << std::endl;
    Animal* animal1 = new Animal();
    Animal* cat1 = new Cat();
    Animal* dog1 = new Dog();
    WrongAnimal* wrongAnimal1 = new WrongAnimal();
    WrongCat* wrongCat1 = new WrongCat();

    std::cout << "\nCalling makeSound on the animals..." << std::endl;
    animal1->makeSound();
    cat1->makeSound();
    dog1->makeSound();
    wrongAnimal1->makeSound();
    wrongCat1->makeSound();

    std::cout << "\nDestroying Animal objects..." << std::endl;
    delete animal1;
    delete cat1;
    delete dog1;
    delete wrongAnimal1;
    delete wrongCat1;

    return 0;
}
