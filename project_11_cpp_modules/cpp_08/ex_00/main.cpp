/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugoorickx <hugoorickx@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 08:45:18 by hugoorickx        #+#    #+#             */
/*   Updated: 2022/03/14 09:37:51 by hugoorickx       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"

void	display_int(int n)
{
	std::cout << n << std::endl;
}

int main()
{
    std::cout << "== Exemple with list ======" << std::endl;
	{
		std::list<int>	lst;
		lst.push_back(1);
		lst.push_back(42);
		lst.push_back(19);
		lst.push_back(-1);
		lst.push_back(0);
        printAll(lst);
		try
		{
			std::cout << "  => Try to find 19" << std::endl;
			std::cout << easyfind(lst, 19) << std::endl;
			
            std::cout << "  => Try to find 4" << std::endl;
            std::cout << easyfind(lst, 4) << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}
    std::cout << "\n== Exemple with Array =====" << std::endl;
	{
        std::array<int, 5>	lst;
		
		lst[0] = 1;
		lst[1] = 42;
		lst[2] = 19;
		lst[3] = -1;
		lst[4] = 0;
        printAll(lst);
		try
		{
			std::cout << "  => Try to find 19" << std::endl;
			std::cout << easyfind(lst, 19) << std::endl;
			
            std::cout << "  => Try to find 4" << std::endl;
            std::cout << easyfind(lst, 4) << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}
    std::cout << "\n== Exemple with vector ====" << std::endl;
	{
		std::vector<int>	lst;
		
		lst.push_back(1);
		lst.push_back(42);
		lst.push_back(19);
		lst.push_back(-1);
		lst.push_back(0);
        printAll(lst);
		try
		{
            std::cout << "  => Try to find 19" << std::endl;
			std::cout << easyfind(lst, 19) << std::endl;
			
            std::cout << "  => Try to find 4" << std::endl;
            std::cout << easyfind(lst, 4) << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}
}