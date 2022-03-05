/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 18:08:28 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/05 18:43:32 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int ac, char **av)
{
	int i;
	Karen ppl;
	std::string val[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	if (ac != 2)
	{
		std::cout << "Error arguments : ./karenFilter <WARNING - ERROR - INFO - DEBUG>" << std::endl;
		return (1);
	}
	for(i=0; i < 4; i++)
		if (!val[i].compare(av[1]))
			break ;
	if (i == 4)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return (0);
	}
	ppl.complain(av[1]);
}