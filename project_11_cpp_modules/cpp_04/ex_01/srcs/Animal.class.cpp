/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 10:07:12 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/09 10:22:19 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/all.hpp"

Animal::Animal( void )
{
    std::cout << "It's alive !" << std::endl;
    return ;
}

Animal::Animal( Animal & src )
{
    this->_type = src.getType();
    std::cout << "The copy is alive !" << std::endl;
    return ;
}

Animal::~Animal( void )
{
    std::cout << "oh It's dead !" << std::endl;
    return ;
}

void    Animal::makeSound( void ) const
{
    std::cout << "Who am I ?" << std::endl;
    return ;
}

std::string    Animal::getType( void ) const
{
    return (this->_type);
}

void Animal::operator= ( Animal const &)
{
    return ;
}