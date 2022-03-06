/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 17:12:38 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/06 17:23:27 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string const name) : ClapTrap( name + "_clap_name" , 100, 50, 30), ScavTrap( name + "_clap_name" ), FragTrap( name + "_clap_name" ), _name(name)
{
    std::cout << "Come back DiamondTrap !" << std::endl;
    return ;
}

DiamondTrap::~DiamondTrap()
{
    return ;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "Hi, I am " << this->ClapTrap::_name << " but you can call me " << this->_name << "." << std::endl;
}