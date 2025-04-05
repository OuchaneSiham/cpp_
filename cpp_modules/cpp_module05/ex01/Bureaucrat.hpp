#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <exception> 
#include <stdexcept>
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
        //7ydy friend;
        friend std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);
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
