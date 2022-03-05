/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Repertoire.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 11:30:41 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/05 14:08:34 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Repertoire.class.hpp"

Repertoire::Repertoire( void )
{
    return ;
}

Repertoire::~Repertoire( void )
{
    return;
}

Contact     Repertoire::getContact( int position ) const
{
    return (this->list[position]);
}

void		Repertoire::setFirst_name( int position, std::string in )
{
    this->list[position].setFirst_name(in);
    return ;
}
void		Repertoire::setLast_name( int position, std::string in )
{
    this->list[position].setLast_name(in);
    return ;
}
void		Repertoire::setNickname( int position, std::string in )
{
    this->list[position].setNickname(in);
    return ;
}
void		Repertoire::setPhone_number( int position, std::string in )
{
    this->list[position].setPhone_number(in);
    return ;
}
void		Repertoire::setDarkest_secret( int position, std::string in )
{
    this->list[position].setDarkest_secret(in);
    return ;
}