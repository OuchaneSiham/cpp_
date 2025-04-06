/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 19:01:55 by souchane          #+#    #+#             */
/*   Updated: 2025/04/06 18:18:32 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP
#include <iostream>
#include <exception> 
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        const std::string _name;
        bool _isSigned;
        const int _gradeToSign;
        const int _gradeToExecute;
    public:
        AForm(void);
        AForm(const AForm &source);
        AForm(const std::string &name, const int &gradeToSign, const int &gradeToExecute);
        virtual ~AForm();
        AForm &operator=(const AForm &source);
        
        void beSigned(const Bureaucrat &signer);
        virtual void execute(Bureaucrat const & executor) const = 0; // Pure virtual function
        
        // getters methods;
        const std::string &getName(void) const;
        bool const &isSigned(void) const;
        const int &getGradeToSign() const;
        const int &getGradeToExecute() const;
        
        
        class GradeTooHighException: public std::exception
        {
            public:
                virtual char const *what() const throw();
        };
        class GradeTooLowException: public std::exception
        {
            public:
                virtual char const *what() const throw();
        };
        class FormNotSignedException: public std::exception
        {
            public:
                virtual char const *what() const throw();
        };
};
std::ostream &operator<<(std::ostream &out, const AForm &aform);

#endif