/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 11:00:09 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/09 10:22:45 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/all.hpp"

WrongAnimal::WrongAnimal( void )
{
    std::cout << "It's AAAAAAAAAAlive !" << std::endl;
    return ;
}

WrongAnimal::WrongAnimal( WrongAnimal & src )
{
    this->_type = src.getType();
    std::cout << "The copy is AAAAAAAAAAlive !" << std::endl;
    return ;
}

WrongAnimal::~WrongAnimal( void )
{
    std::cout << "oh It's DEADDDDDD !" << std::endl;
    return ;
}

void    WrongAnimal::makeSound( void ) const
{
    std::cout << "Who am IIIIIIII ?" << std::endl;
    return ;
}

std::string    WrongAnimal::getType( void ) const
{
    return (this->_type);
}

void WrongAnimal::operator= ( WrongAnimal const & )
{
    return ;
}