/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 10:42:22 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/12 10:58:41 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Data.class.hpp"

/********************/
/*                  */
/*  Constructor     */
/*                  */
/********************/

Data::Data( void ) : _test(0)
{
    return ;
}

Data::Data( std::string const & str ) : _test(str)
{
    return ;
}

Data::Data( Data const & cpy ) : _test(cpy.getTest())
{
    return ;
}

/********************/
/*                  */
/*  Destructor      */
/*                  */
/********************/

Data::~Data( void )
{
    return ;
}

/********************/
/*                  */
/*  Over operator   */
/*                  */
/********************/

void    Data::operator=(const Data& op)
{
    this->_test = op.getTest();
    return ;
}

/********************/
/*                  */
/*  Fct membre      */
/*                  */
/********************/

std::string Data::getTest( void ) const
{
    return (this->_test);
}
