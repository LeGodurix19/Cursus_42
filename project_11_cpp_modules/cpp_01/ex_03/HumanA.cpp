/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 17:14:06 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/05 17:28:30 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void		HumanA::set_name( std::string name )
{
    this->_name = name;
}
void		HumanA::setWeapon( Weapon weapon )
{
    this->_weapon = weapon;
}

std::string	HumanA::get_name( void )
{
    return (this->_name);
}

Weapon		&HumanA::get_weapon( void )
{
    return (this->_weapon);
}

void    HumanA::attack( void )
{
    std::cout << this->get_name() << " attacks with his " << this->get_weapon().getType() << std::endl ;
}

HumanA::HumanA( std::string name, Weapon &weapon ) : _name(name), _weapon(weapon)
{
    return ;
}

HumanA::~HumanA()
{
    return ;
}