/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 19:13:49 by souchane          #+#    #+#             */
/*   Updated: 2025/04/06 19:13:50 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        std::string _target;

    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const std::string &target);
        PresidentialPardonForm(const PresidentialPardonForm &source);
        ~PresidentialPardonForm();
        
        PresidentialPardonForm &operator=(const PresidentialPardonForm &source);
        
        void execute(Bureaucrat const & executor) const;
        
        const std::string &getTarget() const;
};

#endif