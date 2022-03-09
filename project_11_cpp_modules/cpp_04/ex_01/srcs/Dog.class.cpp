/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 10:07:10 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/09 10:26:26 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/all.hpp"

Dog::Dog( void )
{
    this->_brain = new Brain;
    this->_type = "Dog";
    std::cout << "Doggy dog is there" << std::endl;
    return ;
}

Dog::Dog( Dog & src )
{
    this->_type = src.getType();
    this->_brain = new Brain(*src.getBrain());
    std::cout << "Copy dog is there" << std::endl;
    return ;
}

Dog::~Dog( void )
{
    delete (this->_brain);
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

Brain           *Dog::getBrain( void ) const
{
    return (this->_brain);
}

void Dog::operator= ( Dog const & )
{
    return ;
}