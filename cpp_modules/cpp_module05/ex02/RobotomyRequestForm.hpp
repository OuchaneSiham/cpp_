/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 19:12:29 by souchane          #+#    #+#             */
/*   Updated: 2025/04/06 19:12:46 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib> // For rand()
#include <ctime>   // For time()

class RobotomyRequestForm : public AForm
{
    private:
        std::string _target;

    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const std::string &target);
        RobotomyRequestForm(const RobotomyRequestForm &source);
        ~RobotomyRequestForm();
        
        RobotomyRequestForm &operator=(const RobotomyRequestForm &source);
        
        void execute(Bureaucrat const & executor) const;
        
        const std::string &getTarget() const;
};

#endif