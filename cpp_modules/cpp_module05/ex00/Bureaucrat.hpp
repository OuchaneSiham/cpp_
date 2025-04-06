/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 14:53:11 by souchane          #+#    #+#             */
/*   Updated: 2025/04/06 19:18:00 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

// You overload the assignment operator, operator=, 
// with a nonstatic member function that has only one parameter. 
// You cannot declare an overloaded assignment operator that is a nonmember function.
//  The following example shows how you can overload the assignment operator for a particular class: 
// struct X 
// {
//   int data;
//   X& operator=(X& a) { return a; }
//   X& operator=(int a) {
//     data = a;
//     return *this;
//   }
// };

// int main() {
//   X x1, x2;
//   x1 = x2;      // call x1.operator=(x2)
//   x1 = 5;       // call x1.operator=(5)
// }

// The assignment x1 = x2 calls the copy assignment operator X& X::operator=(X&).
// The assignment x1 = 5 calls the copy assignment operator X& X::operator=(int). 
// The compiler implicitly declares a copy assignment operator for a class if you do not define one yourself.
// Consequently, the copy assignment operator (operator=) of a derived class hides the copy assignment operator of its base class.
// However, you can declare any copy assignment operator as virtual. 
// The following example demonstrates this:

// #include <iostream>
// using namespace std;

// struct A {
//   A& operator=(char) {
//     cout << "A& A::operator=(char)" << endl;
//     return *this;
//   }
//   virtual A& operator=(const A&) {
//     cout << "A& A::operator=(const A&)" << endl;
//     return *this;
//   }
// };

// struct B : A {
//     B& operator=(char) {
//       cout << "B& B::operator=(char)" << endl;
//       return *this;
//     }
//     virtual B& operator=(const A&) {
//       cout << "B& B::operator=(const A&)" << endl;
//       return *this;
//     }
// };

// struct C : B { };

// int main() {
//   B b1;
//   B b2;
//   A* ap1 = &b1;
//   A* ap2 = &b1;
//   *ap1 = 'z';
//   *ap2 = b2;

//   C c1;
// //  c1 = 'z';
// }

// The following is the output of the above example:

// A& A::operator=(char)
// B& B::operator=(const A&)

// The assignment *ap1 = 'z' calls A& A::operator=(char). 
// Because this operator has not been declared virtual, 
// the compiler chooses the function based on the type of the pointer ap1. 
// The assignment *ap2 = b2 calls B& B::operator=(const &A). 
// Because this operator has been declared virtual, 
// the compiler chooses the function based on the type of the object that the pointer ap1 points to. 
// The compiler would not allow the assignment c1 = 'z' 
// because the implicitly declared copy assignment operator declared in class C hides B& B::operator=(char).