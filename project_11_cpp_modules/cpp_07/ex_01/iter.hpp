/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugoorickx <hugoorickx@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 21:19:09 by hugoorickx        #+#    #+#             */
/*   Updated: 2022/03/13 21:27:03 by hugoorickx       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template< typename T >
void    iter( T * tab, int nb, void fct(T const & e))
{
    for (int i = 0; i < nb; i++)
    {
        fct(tab[i]);
    }
}
#endif