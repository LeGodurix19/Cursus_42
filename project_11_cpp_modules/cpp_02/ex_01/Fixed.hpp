/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 10:41:51 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/06 11:26:38 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	
	int                 _nb;
	int const static    _nbBits = 8;

public:

	Fixed( void );
	Fixed( Fixed const & cpy );
	Fixed( int const cpy );
	Fixed( float const cpy );
	~Fixed( void );

	int 	getRawBits( void ) const ;
	int 	toInt( void ) const ;

	float 	toFloat( void ) const ;

	void    setRawBits( int const raw );

	void 	operator= (Fixed const & a);
};

std::ostream& operator<<( std::ostream &flux, Fixed const& FixedNb );

#endif