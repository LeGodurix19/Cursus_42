/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 10:56:27 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/05 11:17:57 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int shi = 0; shi < ac; shi++)
		{
			for (int fu = 0; fu < (int)strlen(av[shi]); fu++)
				av[shi][fu] = toupper(av[shi][fu]);
			std::cout << av[shi];
		}
		std::cout << std::endl;
	}
	return 0;
}