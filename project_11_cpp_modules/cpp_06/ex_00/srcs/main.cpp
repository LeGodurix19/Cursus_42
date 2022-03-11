/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:16:20 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/11 18:12:18 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Conv.class.hpp"

int main(int ac, char **av)
{
	if (ac >= 2)
	{
		Conv	nb(av[1]);

		if (nb.getIsChar())
			std::cout << "char: " << nb.getValChar() << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		if (nb.getIsInt())
		    std::cout << "int: " << nb.getValInt() << std::endl;
		else
			std::cout << "int: Non displayable" << std::endl;
        if (!nb.getValFloat())
		    std::cout << "float: " << nb.getValFloat() << ".0f" << std::endl;
        else
		    std::cout << "float: " << nb.getValFloat() << "f" << std::endl;
        if (!nb.getValDouble())
		    std::cout << "float: " << nb.getValDouble() << ".0" << std::endl;
        else
		    std::cout << "float: " << nb.getValDouble() << std::endl;
	}
}