/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 18:17:59 by souchane          #+#    #+#             */
/*   Updated: 2025/03/04 18:18:00 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>
#include <cctype>


int main(int c, char **v)
{
    int i;
    size_t j;
    i = 1;
    if(c == 1)
    {
         std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
     else
    {
        while (i < c) 
        {
            std::string arg = v[i];
            j = 0;
            while (j < arg.length()) 
            {
                std::cout << (char)std::toupper(arg[j]);
                j++;
            }
            if(v[i] != NULL)
                std::cout << " ";
            i++;
        }
    }
    std::cout << std::endl;
    return 0;
}
