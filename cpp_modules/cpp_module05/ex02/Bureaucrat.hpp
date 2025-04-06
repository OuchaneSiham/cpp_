/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 18:21:20 by souchane          #+#    #+#             */
/*   Updated: 2025/04/06 18:34:06 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <exception> 
#include <stdexcept>
class AForm;
class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(const Bureaucrat &source);
        Bureaucrat(const std::string &name, int grade);
        ~Bureaucrat();
        Bureaucrat &operator=(const Bureaucrat &source);

        const std::string &getName(void) const;
        int getGrade(void) const;

        void incrGrade();
        void decrGrade();
        /// for the form class
        void signForm(AForm &aform);
        void executeForm(AForm const &aform);
        //7ydy friend;
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
std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);
#endif