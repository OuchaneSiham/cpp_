/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 20:21:30 by souchane          #+#    #+#             */
/*   Updated: 2025/04/04 20:36:20 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

void testValidBureaucrat() 
{
    std::cout << "--- TEST: Valid Bureaucrat Creation ---\n";
    Bureaucrat bob("Bob", 42);
    std::cout << bob << std::endl;
}

void testInvalidGrades() 
{
    std::cout << "\n--- TEST: Invalid Grades ---\n";
    try
     {
        Bureaucrat tooHigh("Napoleon", 0);
    } 
    catch (std::exception &e) 
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    try 
    {
        Bureaucrat tooLow("Slacker", 151);
    } 
    catch (std::exception &e) 
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}

void testGradeIncrements() 
{
    std::cout << "\n--- TEST: Grade Increments/Decrements ---\n";
    Bureaucrat alice("Alice", 2);
    std::cout << alice << std::endl;

    try 
    {
        alice.incrGrade();
        std::cout << "After increment: " << alice << std::endl;
        alice.incrGrade();
    } 
    catch (std::exception &e) 
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}

void testGradeDecrements() 
{
    std::cout << "\n--- TEST: Grade Decrements ---\n";
    Bureaucrat charlie("Charlie", 149);
    std::cout << charlie << std::endl;

    try 
    {
        charlie.decrGrade();
        std::cout << "After decrement: " << charlie << std::endl;
        charlie.decrGrade();
    } catch (std::exception &e) 
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}

void testCopyAndAssignment() 
{
    std::cout << "\n--- TEST: Copy and Assignment ---\n";
    Bureaucrat original("Original", 50);
    Bureaucrat copy(original);
    Bureaucrat assigned("Temporary", 75);
    assigned = original;

    std::cout << "Original: " << original << std::endl;
    std::cout << "Copy: " << copy << std::endl;
    std::cout << "Assigned: " << assigned << std::endl;
    std::cout << "////////////////////// " << original << std::endl;
    std::cout << "Assigned name check: " << assigned.getName() 
          << " (grade copied, name remains unchanged)\n";
}

int main() 
{
    testValidBureaucrat();
    testInvalidGrades();
    testGradeIncrements();
    testGradeDecrements();
    testCopyAndAssignment();
    return 0;
}