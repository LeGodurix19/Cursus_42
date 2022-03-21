/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugoorickx <hugoorickx@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 11:15:28 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/21 10:22:19 by hugoorickx       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ABC.class.hpp"

void identify( Base* p )
{
    if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
    return ;
}

void identify(Base& p)
{
    try
	{
		static_cast<void>(dynamic_cast<A &>(p));
		std::cout << "A" << std::endl;
	}
	catch (std::exception & e)
    {}
	try
	{
		static_cast<void>(dynamic_cast<B &>(p));
		std::cout << "B" << std::endl;
	}
	catch (std::exception & e)
    {}
	try
	{
		static_cast<void>(dynamic_cast<C &>(p));
		std::cout << "C" << std::endl;
	}
	catch (std::exception & e)
    {}

    return ;
}