/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 21:19:09 by hugoorickx        #+#    #+#             */
/*   Updated: 2022/03/22 18:06:48 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template< typename T >
void    iter( T * tab, int nb, void fct(T const & e))
{
    for (int i = 0; i < nb; i++)
        fct(tab[i]);
}

#endif