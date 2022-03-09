/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 11:07:23 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/09 10:14:52 by hgoorick         ###   ########.fr       */
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

Fixed::Fixed(int const cpy)
{
    std::cout << "Int constructor called" << std::endl;
    this->_nb = cpy << this->_nbBits;
}

Fixed::Fixed(float const cpy)
{
    std::cout << "Float constructor called" << std::endl;
    this->_nb = cpy * (1 << this->_nbBits);
}

Fixed::~Fixed( void )
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

int Fixed::getRawBits( void ) const
{
    return (this->_nb);
}

int 	Fixed::toInt( void ) const
{
    return (this->_nb >> this->_nbBits);
}

float 	Fixed::toFloat( void ) const
{
    return ((float)this->_nb / (1 << this->_nbBits));
}

void    Fixed::setRawBits( int const raw )
{
    this->_nb = raw;
    return ;
}

void Fixed::operator= ( Fixed const & a )
{
    std::cout << "Copy assignment operator called" << std::endl;
	this->_nb = a.getRawBits();
}

std::ostream& operator<<( std::ostream &flux, Fixed const& FixedNb )
{
    flux << FixedNb.toFloat();
    return flux;
}