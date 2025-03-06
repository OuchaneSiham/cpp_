/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 22:41:27 by souchane          #+#    #+#             */
/*   Updated: 2025/03/02 22:51:35 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// Pointers: A pointer is a variable that holds the memory address of another variable.
// A pointer needs to be dereferenced with the * operator to access the memory location it points to. 

// References: A reference variable is an alias, that is, another name for an already existing variable.
// A reference, like a pointer, is also implemented by storing the address of an object. 
// A reference can be thought of as a constant pointer (not to be confused with a pointer to a constant value!) 
// with automatic indirection, i.e., the compiler will apply the * operator for you. 
int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;
    std::cout << "Memory Address of str     : " << &str << std::endl;
    std::cout << "Memory Address held by PTR: " << stringPTR << std::endl;
    std::cout << "Memory Address held by REF: " << &stringREF << std::endl;
    std::cout << "Value of str     : " << str << std::endl;
    std::cout << "Value pointed by PTR: " << *stringPTR << std::endl;
    std::cout << "Value referenced by REF: " << stringREF << std::endl;

    return 0;
}
// in this case, the memory address of the string is the same as the memory address held by the pointer and the reference.
// s *stringptr means that we are pointing to the value of the string, and stringREF means that we are referencing the value of the string.
// the s& operator is used to get the memory address of a variable.
// the * operator is used to get the value of a variable.
// 