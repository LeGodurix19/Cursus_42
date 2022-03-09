/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 10:07:07 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/09 10:22:51 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/all.hpp"

WrongCat::WrongCat( void )
{
    this->_type = "WrongCat";
    std::cout << "Cat catty is there" << std::endl;
    return ;
}

WrongCat::WrongCat( WrongCat & src )
{
    this->_type = src.getType();
    std::cout << "Copy catty is there" << std::endl;
    return ;
}

WrongCat::~WrongCat( void )
{
    std::cout << "Cat catty isn't there" << std::endl;
    return ;
}

void    WrongCat::makeSound( void ) const
{
    std::cout << "MiaoUUUUU MiaoUUUUU" << std::endl;
    return ;
}

std::string    WrongCat::getType( void ) const
{
    return (this->_type);
}

void WrongCat::operator= ( WrongCat const & )
{
    return ;
}