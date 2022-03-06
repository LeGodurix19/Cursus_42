/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 16:28:44 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/06 16:58:53 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name, 100, 50, 20 )
{
    std::cout << "Wake up ScavTrap !" << std::endl;
    return ;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Come back ScavTrap !" << std::endl;
    return ;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " have enterred in Gate keeper mode." << std::endl;
}

void	ScavTrap::attack(std::string const & target)
{
    if (this->_hitPoints <= 0)
    {
        std::cout <<  this->_name << " is dead!" << std::endl;
        return;
    }
    if (!this->_energyPoints)
    {
        std::cout <<  this->_name << " doesn't have energy points!" << std::endl;
        return;
    }
	std::cout << "ScavTrap " << this->_name;
    std::cout << " attack " << target;
    std::cout << ", causing " << this->_attackDamage;
    std::cout << " points of damage!" << std::endl;
}