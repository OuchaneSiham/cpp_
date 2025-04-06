/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 19:13:55 by souchane          #+#    #+#             */
/*   Updated: 2025/04/06 19:14:04 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() 
    : AForm("PresidentialPardonForm", 25, 5), _target("default")
{
    std::cout << "Default constructor of PresidentialPardonForm is called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) 
    : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
    std::cout << "Target constructor of PresidentialPardonForm is called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &source) 
    : AForm(source), _target(source._target)
{
    std::cout << "Copy constructor of PresidentialPardonForm is called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm destructor is called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &source)
{
    if (this != &source)
    {
        AForm::operator=(source);
        this->_target = source._target;
    }
    return *this;
}

const std::string &PresidentialPardonForm::getTarget() const
{
    return this->_target;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (!this->isSigned())
        throw AForm::FormNotSignedException();
    if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}