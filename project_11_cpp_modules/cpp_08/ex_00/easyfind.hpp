/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugoorickx <hugoorickx@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 08:45:15 by hugoorickx        #+#    #+#             */
/*   Updated: 2022/03/25 13:20:28 by hugoorickx       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <list>
# include <array>
# include <vector>

template< typename T >
int easyfind( T & contInt, int toFind)
{
	typename T::iterator iter = std::find(contInt.begin(), contInt.end(), toFind);
	
	if (iter == contInt.end())
		return (-1);
	else
		return (std::distance(contInt.begin(), iter));
}

template< typename T >
void    printAll( T const & cont)
{
	typename T::const_iterator	endCont = cont.end();
    
	std::cout << "Content :" << std::endl;
    for (typename T::const_iterator	valNow = cont.begin(); valNow != endCont; valNow++)
		std::cout << *valNow << std::endl;
    std::cout << std::endl;
}

#endif