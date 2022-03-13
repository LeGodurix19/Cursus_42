/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugoorickx <hugoorickx@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 11:39:41 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/13 21:08:02 by hugoorickx       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template< typename T >
void    swap( T & a, T & b)
{
    T   tmp;

    tmp = a;
    a = b;
    b = tmp;
}

template< typename T >
T   min( T const & a, T const & b)
{
    return (( a < b) ? a : b);
}

template< typename T >
T   max( T const & a, T const & b)
{
    return (( a > b) ? a : b);
}

#endif