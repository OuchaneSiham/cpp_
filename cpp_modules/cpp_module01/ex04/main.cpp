/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchane <souchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 04:50:04 by souchane          #+#    #+#             */
/*   Updated: 2025/03/03 05:17:25 by souchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void replaceAndWrite(const std::string& filename, const std::string& s1, const std::string& s2, const std::string& content)
{
    std::ofstream outFile(filename + ".replace");
    if (!outFile) 
    {
        std::cerr << "Error: Unable to create output file." << std::endl;
        return;
    }
    
    size_t pos = 0;
    while (pos < content.length())
    {
        size_t found = content.find(s1, pos);
        if (found != std::string::npos)
        {
            outFile << content.substr(pos, found - pos) << s2;
            pos = found + s1.length();
        }
        else 
        {
            outFile << content.substr(pos);
            break;
        }
    }
    outFile.close();
}

int main(int argc, char** argv) 
{
    if (argc != 4) 
    {
        std::cerr << "Usage: " << argv[0] << " <filename> <old_word> <new_word>" << std::endl;
        return 1;
    }
    std::ifstream inFile(argv[1]);
    if (!inFile)
    {
        std::cerr << "Error: Cannot open file " << argv[1] << std::endl;
        return 1;
    }
    std::string content((std::istreambuf_iterator<char>(inFile)), std::istreambuf_iterator<char>());
    inFile.close();
    replaceAndWrite(argv[1], argv[2], argv[3], content);
    return 0;
}
