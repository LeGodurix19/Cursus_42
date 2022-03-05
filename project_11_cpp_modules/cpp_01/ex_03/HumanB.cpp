/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 17:15:31 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/05 17:28:37 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void		HumanB::set_name( std::string name )
{
    this->_name = name;
}
void		HumanB::setWeapon( Weapon &weapon )
{
    this->_weapon = &weapon;
}

std::string	HumanB::get_name( void )
{
    return (this->_name);
}

Weapon		*HumanB::get_weapon( void )
{
    return (this->_weapon);
}

void    HumanB::attack( void )
{
    if (this->get_weapon())
        std::cout << this->get_name() << " attacks with his " << this->get_weapon()->getType() << std::endl;
    else
	    std::cout << this->get_name() << " don't have any weapon" << std::endl;
}

HumanB::HumanB( std::string name ) : _name(name)
{
    return ;
}

HumanB::~HumanB()
{
    return ;
}