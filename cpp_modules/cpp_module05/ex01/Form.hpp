/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 20:42:29 by souchane          #+#    #+#             */
/*   Updated: 2025/04/06 19:18:28 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <exception> 
#include <stdexcept>
#include "Bureaucrat.hpp"
class Bureaucrat;
class Form
{
    private:
        const std::string _name;
        bool _isSigned;
        const int _gradeToSign;
        const int _gradeToExecute;
    public:
        Form(void);
        Form(const Form &source);
        Form(const std::string &name, const int &gradeToSign, const int &gradeToExecute);
        ~Form();
        Form &operator=(const Form &source);
        void beSigned(const Bureaucrat &signer);
        // getters methods;
        const std::string &getName(void) const;
        bool const &isSigned(void) const;
        const int &getGradeToSign() const;
        const int &getGradeToExecute() const;
    class GradeTooHighException: public std::exception
    {
        public:
            virtual char const  *what() const throw();
    };
    class GradeTooLowException: public std::exception
    {
        public :
            virtual char const *what() const throw();
    };
};
std::ostream &operator<<(std::ostream &out, const Form &form);
#endif