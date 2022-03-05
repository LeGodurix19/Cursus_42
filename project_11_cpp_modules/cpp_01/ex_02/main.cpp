/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 15:29:16 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/05 15:31:41 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string * stringPTR = &str;
    std::string & stringREF = str;

    std::cout << "Addresse Pointeur sur string: " << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << "Addresse Reference sur string: " << std::endl;
    std::cout << &stringREF << std::endl;

    std::cout << "Valeur Addresse Reference sur string: " << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << "Valeur Reference sur string: " << std::endl;
    std::cout << stringREF << std::endl;
}