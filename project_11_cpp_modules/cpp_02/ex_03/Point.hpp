/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 13:39:43 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/06 13:54:10 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
    
    Fixed const x;
    Fixed const y;

public:
    Point( void );
    Point( float const x_in, float const y_in );
    Point( Point const & cpy );
    ~Point( void );

    Fixed   get_x( void ) const ;
    Fixed   get_y( void ) const ;

    Point	& operator= ( Point & a );
};

#endif