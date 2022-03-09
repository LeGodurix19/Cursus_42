/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 10:07:07 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/09 10:22:34 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/all.hpp"

Cat::Cat( void )
{
    this->_type = "Cat";
    std::cout << "Catty cat is there" << std::endl;
    return ;
}

Cat::Cat( Cat & src )
{
    this->_type = src.getType();
    std::cout << "Copy cat is there" << std::endl;
    return ;
}

Cat::~Cat( void )
{
    std::cout << "Catty cat isn't there" << std::endl;
    return ;
}

void    Cat::makeSound( void ) const
{
    std::cout << "Miaou Miaou" << std::endl;
    return ;
}

std::string    Cat::getType( void ) const
{
    return (this->_type);
}

void Cat::operator= ( Cat const & )
{
    return ;
}