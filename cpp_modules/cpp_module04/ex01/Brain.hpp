/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 09:41:18 by souchane          #+#    #+#             */
/*   Updated: 2025/03/15 21:50:51 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Brain.hpp
#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain 
{
private:
    std::string ideas[100];
    
public:
    Brain();
    Brain(const Brain& other);
    Brain& operator=(const Brain& other);
    ~Brain();
    
    void setIdea(int index, const std::string& idea);
    std::string getIdea(int index) const;
};

#endif