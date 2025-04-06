/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 19:12:55 by souchane          #+#    #+#             */
/*   Updated: 2025/04/06 19:13:34 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() 
    : AForm("RobotomyRequestForm", 72, 45), _target("default")
{
    std::cout << "Default constructor of RobotomyRequestForm is called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) 
    : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
    std::cout << "Target constructor of RobotomyRequestForm is called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &source) 
    : AForm(source), _target(source._target)
{
    std::cout << "Copy constructor of RobotomyRequestForm is called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destructor is called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &source)
{
    if (this != &source)
    {
        AForm::operator=(source);
        this->_target = source._target;
    }
    return *this;
}

const std::string &RobotomyRequestForm::getTarget() const
{
    return this->_target;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (!this->isSigned())
        throw AForm::FormNotSignedException();
    if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    std::cout << "* DRILLING NOISES * Bzzzzzzzzzzz... Drrrrrrrrr..." << std::endl;
    static bool seeded = false;
    if (!seeded)
    {
        std::srand(static_cast<unsigned int>(std::time(NULL)));
        seeded = true;
    }
    if (std::rand() % 2)
        std::cout << this->_target << " has been robotomized successfully!" << std::endl;
    else
        std::cout << "Robotomy of " << this->_target << " failed." << std::endl;
}