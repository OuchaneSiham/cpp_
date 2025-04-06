/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 22:37:02 by souchane          #+#    #+#             */
/*   Updated: 2025/04/05 18:26:21 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void): _name("Default"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150)
{
    std::cout << "default constructor of form is called" << std::endl;
}
Form::Form(const Form &source): _name(source._name), _isSigned(source._isSigned), _gradeToSign(source._gradeToSign), _gradeToExecute(source._gradeToExecute)
{
    std::cout << "copy of the constructor is called" << std::endl;
}
Form::Form(const std::string &name, const int &gradeToSign, const int &gradeToExecute)
    :_name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
      if(gradeToSign < 1 || gradeToExecute < 1) throw(GradeTooHighException());
      if(gradeToSign > 150 || gradeToExecute > 150) throw(GradeTooLowException());  
}
Form::~Form()
{
    std::cout << "form class has been destroyed"<< std::endl;
}
Form &Form::operator=(const Form &source)
{
    if(this != &source)
        _isSigned = source._isSigned;
    return *this;
}

const std::string &Form::getName() const
{
    return(_name);    
}
bool const &Form::isSigned() const
{
    // return const_cast<bool &>(_isSigned); 
    // jrby hady
    return(_isSigned);
}
const int &Form::getGradeToSign() const
{
    return(_gradeToSign);    
}
const int &Form::getGradeToExecute() const
{
    return(_gradeToExecute);
}
char const *Form:: GradeTooHighException::what() const throw()
{
    return "Form: Grade is too high!";
}

char const *Form:: GradeTooLowException::what() const throw()
{
    return "Form: Grade is too low!";
}
std::ostream &operator<<(std::ostream &out, const Form &form)
{
    return(out << "Form " << form.getName() << " requires grade " << form.getGradeToSign()
        << " to sign and grade " << form.getGradeToExecute() << " to execute. "
        << "Currently, it is " << (form.isSigned() ? "signed." : "not signed."));
}
void Form::beSigned(const Bureaucrat &signer)
{
    if(signer.getGrade() <= _gradeToSign)
        _isSigned = true;
    else
        throw(GradeTooLowException());
}
