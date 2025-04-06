/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 19:14:18 by souchane          #+#    #+#             */
/*   Updated: 2025/04/06 19:14:19 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main()
{
    std::cout << "===== Creating Bureaucrats =====" << std::endl;
    Bureaucrat lowRank("Intern", 140);
    Bureaucrat midRank("Officer", 50);
    Bureaucrat highRank("President", 1);
    
    std::cout << "\n===== Testing ShrubberyCreationForm =====" << std::endl;
    ShrubberyCreationForm shrubForm("garden");
    std::cout << shrubForm << std::endl;
    
    // Try to execute before signing
    std::cout << "\nTrying to execute before signing:" << std::endl;
    highRank.executeForm(shrubForm);
    
    // Signing by low rank bureaucrat
    std::cout << "\nSigning by low rank bureaucrat:" << std::endl;
    lowRank.signForm(shrubForm);
    
    // Execute by different ranks
    std::cout << "\nExecuting by different ranks:" << std::endl;
    lowRank.executeForm(shrubForm);  // Should fail - grade too low
    midRank.executeForm(shrubForm);  // Should succeed
    
    std::cout << "\n===== Testing RobotomyRequestForm =====" << std::endl;
    RobotomyRequestForm robotForm("Bender");
    std::cout << robotForm << std::endl;
    
    // Signing attempts
    std::cout << "\nSigning attempts:" << std::endl;
    lowRank.signForm(robotForm);  // Should fail - grade too low
    midRank.signForm(robotForm);  // Should succeed
    
    // Execute attempts
    std::cout << "\nExecute attempts:" << std::endl;
    midRank.executeForm(robotForm);  // Should fail - grade too low
    highRank.executeForm(robotForm); // Should succeed with 50% chance
    
    std::cout << "\n===== Testing PresidentialPardonForm =====" << std::endl;
    PresidentialPardonForm pardonForm("Arthur Dent");
    std::cout << pardonForm << std::endl;
    
    // Signing attempts
    std::cout << "\nSigning attempts:" << std::endl;
    midRank.signForm(pardonForm);  // Should fail - grade too low
    highRank.signForm(pardonForm); // Should succeed
    
    // Execute attempts
    std::cout << "\nExecute attempts:" << std::endl;
    midRank.executeForm(pardonForm);  // Should fail - grade too low
    highRank.executeForm(pardonForm); // Should succeed
    
    std::cout << "\n===== All tests completed =====" << std::endl;
    
    return 0;
}