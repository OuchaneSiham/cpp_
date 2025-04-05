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
        bool &isSigned(void) const;
        const int &getGradeToSign() const;
        const int &getGradeToExecute() const;
    friend std::ostream &operator<<(std::ostream &out, const Form &form);
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
#endif