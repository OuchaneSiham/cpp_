/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 18:22:40 by souchane          #+#    #+#             */
/*   Updated: 2025/04/06 19:16:17 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
Bureaucrat::Bureaucrat(): name("Default"), grade(150)
{
    std::cout << "default constructor called" << std::endl;
}
Bureaucrat::Bureaucrat(const Bureaucrat &source): name(source.name), grade(source.grade)
{
    std::cout << "copy constructor has been called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade): name(name), grade(grade) 
{
    if (grade < 1) throw GradeTooHighException();
    if (grade > 150) throw GradeTooLowException();
}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &source) 
{
    if (this != &source) 
    {
        this->grade = source.grade;
    }
    return *this;
}
Bureaucrat::~Bureaucrat() 
{
    std::cout << "Destructor called for " << name << std::endl;
}
std::string const &Bureaucrat::getName()const
{
    return(this->name);
}
int Bureaucrat::getGrade() const 
{
    return this->grade; 
}

void Bureaucrat::incrGrade()
{
    this->grade--;
    if(this->grade < 1)
    {
       throw(Bureaucrat::GradeTooHighException());
    }
}
void Bureaucrat::decrGrade()
{
    this->grade++;
    if(this->grade > 150)
    {
        throw(Bureaucrat::GradeTooLowException());
    }
}
char const	*Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade is too high");
}

char const	*Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade is too low");
}
std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat) 
{
   return(out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade());
    // return out;
}

void Bureaucrat::signForm(AForm &aform)
{
    try
    {
        aform.beSigned(*this);
        std::cout<< name << " signed " << aform.getName() << std::endl;
    }
    catch(std::exception &e)
    {
         std::cout<< name << " could not sign " << aform.getName() << " because " << e.what() << std::endl;
    }
}
void Bureaucrat::executeForm(AForm const &aform)
{
    try
    {
        aform.execute(*this);
        std::cout<< this->name <<" executed " << aform.getName() << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout<< this->name << " can not be executed " << aform.getName() << " because " << e.what() << std::endl;
    }
}