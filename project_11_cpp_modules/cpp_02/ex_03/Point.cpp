/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 13:53:14 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/06 13:53:45 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"

Point::Point( void ) : x(0), y(0)
{
    return ;
}

Point::Point( float const x_in, float const y_in ) : x(x_in), y(y_in)
{
    return ;
}

Point::Point( Point const & cpy ) : x(cpy.get_x()), y(cpy.get_y())
{
    return ;
}

Point::~Point( void )
{
    return ;
}

Fixed   Point::get_x( void ) const
{
    return (this->x);
}
Fixed   Point::get_y( void ) const
{
    return (this->y);
}

Point   & Point::operator= ( Point & a )
{
	return (a);
}