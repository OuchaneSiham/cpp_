/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 13:14:45 by souchane          #+#    #+#             */
/*   Updated: 2025/03/02 21:30:43 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"
Zombie *newZombie(std::string name);
// This function creates a zombie, names it, and returns it so you can use it outside
// of the function scope.
void randomChump(std::string name);
// this function creates a zombie, names it, and makes it announce itself.
int main()
{
    Zombie *zombie1 = newZombie("souchane");
    zombie1->announce();
    randomChump("alpha");
    delete zombie1;
    return 0;
}

// Now, what is the actual point of the exercise? You have to determine in which case
// it is better to allocate zombies on the stack or the heap.
// Zombies must be destroyed when you no longer need them. The destructor must print
// a message with the name of the zombie for debugging purposes.


// this exercise is about memory allocation, stack and heap memory allocation.
// stack memory allocation is faster than heap memory allocation.
// stack memory allocation is limited, while heap memory allocation is not.




// 1️⃣ Classes and Objects
// In C++, we use classes to create objects. Think of a class as a blueprint (like a struct in C, but with functions inside). Each object created from the class has its own data.

// Key Points:
// A class defines attributes (variables) and methods (functions).
// Objects are instances of a class.
