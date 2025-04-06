/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 19:18:34 by souchane          #+#    #+#             */
/*   Updated: 2025/04/06 19:11:57 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
//     : AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

// ShrubberyCreationForm::~ShrubberyCreationForm() {}

// void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
// {
//     if (!isSigned())
//         throw AForm::FormNotSignedException();
//     if (executor.getGrade() > getGradeToExecute())
//         throw AForm::GradeTooLowException();

//     std::ofstream file(_target + "_shrubbery");
//     if (file.is_open())
//     {
//         file << "       _-_\n"
//              << "    /~~   ~~\\\n"
//              << " /~~         ~~\\\n"
//              << "{               }\n"
//              << " \\  _-     -_  /\n"
//              << "   ~  \\\\ //  ~\n"
//              << "_- -   | | _- _\n"
//              << "  _ -  | |   -_\n"
//              << "      // \\\\\n";
//         file.close();
//     }
// }
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 145, 137), _target("default")
{
    std::cout << "Default constructor for SCF is called! " << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
    :AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
    std::cout << "target constructor of SCF is called  " << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &source)
    :AForm(source), _target(source._target)
{
    std::cout << " copy constructor for SCF is called  " << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << " the constructor class SCF is destroyed now " << std::endl;
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &source)
{
    if (this != &source)
    {
        AForm::operator=(source);
        this->_target = source._target;
    }
    return *this;
}

const std::string &ShrubberyCreationForm::getTarget() const
{
    return(this->_target);
}
void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if(this->isSigned() == 0)
        throw AForm::FormNotSignedException();
    if(executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowException();
    std::string fileName = this->_target + "__shrubbery";
    std::ofstream outFile(fileName.c_str());
    if(outFile.is_open() == 0)
    {
        std::cerr << "Error: Could not open file " << fileName << std::endl;
        return;
    }
    // outFile << "         *         " << std::endl;
    // outFile << "        /|\\        " << std::endl;
    // outFile << "       / | \\       " << std::endl;
    // outFile << "      /  |  \\      " << std::endl;
    // outFile << "     /   |   \\     " << std::endl;
    // outFile << "    /    |    \\    " << std::endl;
    // outFile << "   /     |     \\   " << std::endl;
    // outFile << "  *------*------*  " << std::endl;
    // outFile << "       /||\\       " << std::endl;
    // outFile << "       ||||       " << std::endl;
    // outFile << "       ||||       " << std::endl;
    // outFile << "       ||||       " << std::endl;
    // outFile << "=================" << std::endl;
    // outFile << std::endl;
    // outFile << "         *         " << std::endl;
    // outFile << "        /|\\        " << std::endl;
    // outFile << "       / | \\       " << std::endl;
    // outFile << "      /  |  \\      " << std::endl;
    // outFile << "     /   |   \\     " << std::endl;
    // outFile << "    *----*----*    " << std::endl;
    // outFile << "       /||\\       " << std::endl;
    // outFile << "       ||||       " << std::endl;
    // outFile << "=================" << std::endl;
    outFile << "       _-_\n"
            << "    /~~   ~~\\\n"
            << " /~~         ~~\\\n"
            << "{               }\n"
            << " \\  _-     -_  /\n"
            << "   ~  \\\\ //  ~\n"
            << "_- -   | | _- _\n"
            << "  _ -  | |   -_\n"
            << "      // \\\\\n";
    outFile.close();
    std::cout << "Created " << fileName << " with ASCII trees" << std::endl;
}