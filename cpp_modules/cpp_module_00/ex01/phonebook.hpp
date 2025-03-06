/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 03:28:15 by souchane          #+#    #+#             */
/*   Updated: 2025/03/04 06:06:54 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include<iostream>
#include<cctype>
#include <string>
#include<iomanip>
#include <cstdlib>
#include <limits>
#include "contact.hpp"
class phonebook
{
    private:
        Contact contacts[8];
        int i;
        bool is_full;
    public:
        phonebook(void);
        ~phonebook(void);
        void setting_of_infos(void);
        void getting_of_infos(void)const;
        void rules(void);
        
};

#endif