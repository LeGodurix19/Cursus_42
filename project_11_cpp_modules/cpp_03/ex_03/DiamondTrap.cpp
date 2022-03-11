/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 17:12:38 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/11 14:55:26 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/********************/
/*                  */
/*  Constructor     */
/*                  */
/********************/

DiamondTrap::DiamondTrap(std::string const name) : ClapTrap( name + "_clap_name" , 100, 50, 30), ScavTrap( name + "_clap_name" ), FragTrap( name + "_clap_name" ), _name(name)
{
    std::cout << "Wake up DiamondTrap !" << std::endl;
    return ;
}

DiamondTrap::DiamondTrap( DiamondTrap & cpy) : ClapTrap( cpy.getName() + "_clap_name" , 100, 50, 30), ScavTrap( cpy.getName() + "_clap_name" ), FragTrap( cpy.getName() + "_clap_name" ), _name(cpy.getName())
{
    std::cout << "Wake up DiamondTrap !" << std::endl;
    return ;
}

/********************/
/*                  */
/*  Destructor      */
/*                  */
/********************/

DiamondTrap::~DiamondTrap()
{
    std::cout << "Come back DiamondTrap !" << std::endl;
    return ;
}

/********************/
/*                  */
/*  Fct membre      */
/*                  */
/********************/

void	DiamondTrap::whoAmI()
{
	std::cout << "Hi, I am " << this->ClapTrap::_name << " but you can call me " << this->_name << "." << std::endl;
}

/********************/
/*                  */
/*  Overoperator    */
/*                  */
/********************/

void DiamondTrap::operator= ( DiamondTrap const & a )
{
	this->_name = a.getName();
    return ;
}