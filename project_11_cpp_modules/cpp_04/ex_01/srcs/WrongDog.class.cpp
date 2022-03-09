/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 10:07:10 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/09 10:22:57 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/all.hpp"

WrongDog::WrongDog( void )
{
    this->_type = "WrongDog";
    std::cout << "Dog doggy is there" << std::endl;
    return ;
}

WrongDog::WrongDog( WrongDog & src )
{
    this->_type = src.getType();
    std::cout << "Copy doggy is there" << std::endl;
    return ;
}

WrongDog::~WrongDog( void )
{
    std::cout << "Dog doggy isn't there" << std::endl;
    return ;
}

void    WrongDog::makeSound( void ) const
{
    std::cout << "Waouf Waouf !!!" << std::endl;
    return ;
}

std::string    WrongDog::getType( void ) const
{
    return (this->_type);
}

void WrongDog::operator= ( WrongDog const & )
{
    return ;
}