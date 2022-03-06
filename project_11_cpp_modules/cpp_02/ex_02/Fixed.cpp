/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 11:07:23 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/06 13:33:36 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


/********************************/
/*                              */
/*  Construct                   */
/*                              */
/********************************/


Fixed::Fixed( void )
{
    this->_nb = 0;
    return ;
}

Fixed::Fixed(Fixed const & cpy)
{
    this->setRawBits(cpy.getRawBits());
}

Fixed::Fixed(int const cpy)
{
    this->_nb = cpy << this->_nbBits;
}

Fixed::Fixed(float const cpy)
{
    this->_nb = cpy * (1 << this->_nbBits);
}


/********************************/
/*                              */
/*  Destruct                    */
/*                              */
/********************************/

Fixed::~Fixed( void )
{
    return ;
}


/********************************/
/*                              */
/*  Fcts                        */
/*                              */
/********************************/


int Fixed::getRawBits( void ) const
{
    return (this->_nb);
}

const Fixed & Fixed::max( const Fixed & a, const Fixed & b )
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

const Fixed & Fixed::min( const Fixed & a, const Fixed & b )
{
	if (a.getRawBits() > b.getRawBits())
		return (b);
	return (a);
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


/********************************/
/*                              */
/*  Overload                    */
/*                              */
/********************************/

void Fixed::operator= ( Fixed const & a )
{
	this->_nb = a.getRawBits();
}

Fixed	Fixed::operator- ( Fixed const& a ) const
{
	Fixed c(0);

	c.setRawBits(this->getRawBits() - a.getRawBits());
	return (c);
}

Fixed	Fixed::operator+ ( Fixed const& a ) const
{
	Fixed c(0);

	c.setRawBits(this->getRawBits() + a.getRawBits());
	return (c);
}

Fixed	Fixed::operator* ( Fixed const& a ) const
{
	Fixed c(0);

	c = this->toFloat() * a.toFloat();
	return (c);
}

Fixed	Fixed::operator/ ( Fixed const& a ) const
{
	Fixed c(0);

	c = this->toFloat() / a.toFloat();
	return (c);
}

int	Fixed::operator< ( Fixed const& a ) const
{
	return (this->getRawBits() < a.getRawBits());
}

int	Fixed::operator> ( Fixed const& a ) const
{
	return (this->getRawBits() > a.getRawBits());
}

int	Fixed::operator>= ( Fixed const& a ) const
{
	return (this->getRawBits() >= a.getRawBits());
}

int	Fixed::operator<= ( Fixed const& a ) const
{
	return (this->getRawBits() <= a.getRawBits());
}

int	Fixed::operator== ( Fixed const& a ) const
{
	return (this->getRawBits() == a.getRawBits());
}

int	Fixed::operator!= ( Fixed const& a ) const
{
	return (this->getRawBits() != a.getRawBits());
}

Fixed	& Fixed::operator++ ( void )
{
    this->_nb += 1;
	return (*this);
}

Fixed	& Fixed::operator-- ( void )
{
	 this->_nb += 1;
	return (*this);
}

Fixed   Fixed::operator++ ( int )
{
    Fixed	tmp(*this);

    tmp._nb += 1;
	return (tmp);
}

Fixed   Fixed::operator-- ( int )
{
	Fixed	tmp(*this);

    tmp._nb -= 1;
	return (tmp);
}

std::ostream& operator<< ( std::ostream &flux, Fixed const& FixedNb )
{
    flux << FixedNb.toFloat();
    return flux;
}