/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 08:45:15 by hugoorickx        #+#    #+#             */
/*   Updated: 2022/03/23 16:00:25 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <list>
# include <array>
# include <vector>

template< typename T >
int easyfind( T const & contInt, int toFind)
{
	typename T::const_iterator	endCont = contInt.end();
    
    for (typename T::const_iterator	valNow = contInt.begin(); valNow != endCont; valNow++)
		if (*valNow == toFind)
			return(*valNow);
	throw(std::out_of_range("The number isn't there !"));
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