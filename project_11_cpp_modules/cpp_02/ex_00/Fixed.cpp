/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 11:07:23 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/06 11:10:51 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
{
    std::cout << "Default constructor called" << std::endl;
    this->_nb = 0;
    return ;
}

Fixed::Fixed(Fixed const & cpy)
{
    std::cout << "Copy constructor called" << std::endl;
    this->setRawBits(cpy.getRawBits());
}

Fixed::~Fixed( void )
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_nb);
}

void    Fixed::setRawBits( int const raw )
{
    this->_nb = raw;
    return ;
}

void Fixed::operator= ( Fixed const & a )
{
    std::cout << "Copy constructor called" << std::endl;
	this->_nb = a.getRawBits();
}