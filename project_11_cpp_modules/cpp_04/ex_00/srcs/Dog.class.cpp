/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 10:07:10 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/09 10:22:40 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/all.hpp"

Dog::Dog( void )
{
    this->_type = "Dog";
    std::cout << "Doggy dog is there" << std::endl;
    return ;
}

Dog::Dog( Dog & src )
{
    this->_type = src.getType();
    std::cout << "Copy dog is there" << std::endl;
    return ;
}

Dog::~Dog( void )
{
    std::cout << "Doggy dog isn't there" << std::endl;
    return ;
}

void    Dog::makeSound( void ) const
{
    std::cout << "WAOUF WAOUF !!!" << std::endl;
    return ;
}

std::string    Dog::getType( void ) const
{
    return (this->_type);
}

void Dog::operator= ( Dog const & )
{
    return ;
}