/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 10:07:12 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/09 10:44:57 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/all.hpp"

AAnimal::AAnimal( void )
{
    std::cout << "It's alive !" << std::endl;
    return ;
}

AAnimal::AAnimal( AAnimal & src )
{
    this->_type = src.getType();
    std::cout << "The copy is alive !" << std::endl;
    return ;
}

AAnimal::~AAnimal( void )
{
    std::cout << "oh It's dead !" << std::endl;
    return ;
}

void    AAnimal::makeSound( void ) const
{
    std::cout << "Who am I ?" << std::endl;
    return ;
}

std::string    AAnimal::getType( void ) const
{
    return (this->_type);
}

void AAnimal::operator= ( AAnimal const &)
{
    return ;
}