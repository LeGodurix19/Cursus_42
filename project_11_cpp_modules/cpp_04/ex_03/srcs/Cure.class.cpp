/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 17:33:23 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/09 10:52:26 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/all.hpp"

Cure::Cure( void )  : AMateria("cure")
{
    return ;
}

Cure::~Cure( void )
{
    return ;
}

AMateria* Cure::clone( void ) const
{
    Cure *out = new Cure();
    return (out);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName();
    std::cout << "’s wounds *" << std::endl;
}

void Cure::operator= (Cure const & a)
{
    this->_type = a.getType();
    return ;
}