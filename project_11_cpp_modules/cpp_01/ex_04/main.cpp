/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 17:32:52 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/05 18:05:27 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string ft_replace(std::string line, std::string s1, std::string s2)
{
    size_t         position = 0;

    position = line.find(s1);
    while (position != (size_t)-1)
    {
        line.erase(position, s1.length());
		line.insert(position, s2);
		position = line.find(s1);
    }
    return (line);
}

int main(int ac, char **av)
{
    std::string line;
    
    if (ac != 4)
    {
        std::cout << "Error arguments: <filename> <string1> <string2>" << std::endl;
        return (1);
    }
    
    std::ifstream ifs(av[1]);
    
    if (!ifs.is_open())
    {
        std::cout << "Error filename" << std::endl;
        return (1);
    }

    std::ofstream ofs((std::string)av[1] + ".replace");

    while(getline(ifs, line))
		ofs << ft_replace(line, av[2], av[3]) << std::endl;
    ifs.close();
    ofs.close();
}