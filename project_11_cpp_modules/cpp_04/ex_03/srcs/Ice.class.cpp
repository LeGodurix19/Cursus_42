/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 17:33:27 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/08 10:48:48 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/all.hpp"

Ice::Ice( void )  : AMateria("ice")
{
    return ;
}

Ice::~Ice( void )
{
    return ;
}

AMateria* Ice::clone( void ) const
{
    Ice *out = new Ice();
    return (out);
}

void Ice::use(ICharacter& target)
{
    std::cout << " * shoots an ice bolt at " << target.getName();
    std::cout << "*" << std::endl;
}