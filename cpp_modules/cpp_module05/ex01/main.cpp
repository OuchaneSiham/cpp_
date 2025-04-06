/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 18:12:47 by souchane          #+#    #+#             */
/*   Updated: 2025/04/05 18:17:08 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
    try
    {
        // Test 1: Creating a valid Form and Bureaucrat
        Bureaucrat john("John", 50);
        Form taxForm("Tax Form", 45, 30);

        std::cout << taxForm << std::endl;
        john.signForm(taxForm); // Should fail because John's grade is too low
        std::cout << taxForm << std::endl;

        // Test 2: Bureaucrat with sufficient grade signing the form
        Bureaucrat jane("Jane", 40);
        jane.signForm(taxForm); // Should succeed
        std::cout << taxForm << std::endl;

        // Test 3: Creating a Form with invalid grades
        try
        {
            Form invalidForm("Invalid Form", 0, 150); // Grade too high
        }
        catch (std::exception &e)
        {
            std::cerr << "Exception caught: " << e.what() << std::endl;
        }

        try
        {
            Form invalidForm("Invalid Form", 151, 150); // Grade too low
        }
        catch (std::exception &e)
        {
            std::cerr << "Exception caught: " << e.what() << std::endl;
        }

        // Test 4: Incrementing and decrementing Bureaucrat grades
        Bureaucrat alice("Alice", 2);
        std::cout << alice << std::endl;

        alice.incrGrade(); // Should succeed
        std::cout << alice << std::endl;

        try
        {
            alice.incrGrade(); // Should throw GradeTooHighException
        }
        catch (std::exception &e)
        {
            std::cerr << "Exception caught: " << e.what() << std::endl;
        }

        Bureaucrat bob("Bob", 149);
        std::cout << bob << std::endl;

        bob.decrGrade(); // Should succeed
        std::cout << bob << std::endl;

        try
        {
            bob.decrGrade(); // Should throw GradeTooLowException
        }
        catch (std::exception &e)
        {
            std::cerr << "Exception caught: " << e.what() << std::endl;
        }
    }
    catch (std::exception &e)
    {
        std::cerr << "Unexpected exception: " << e.what() << std::endl;
    }

    return 0;
}