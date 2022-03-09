/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 16:50:31 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/09 10:10:35 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap( name , 100, 100, 30)
{
    std::cout << "Wake up FragTrap !" << std::endl;
    return ;
}

FragTrap::~FragTrap()
{
    std::cout << "Come back FragTrap !" << std::endl;
    return ;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->_name << " want a High Fives." << std::endl;
}

void	FragTrap::attack(std::string const & target)
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
	std::cout << "FragTrap " << this->_name;
    std::cout << " attack " << target;
    std::cout << ", causing " << this->_attackDamage;
    std::cout << " points of damage!" << std::endl;
}

void FragTrap::operator= ( FragTrap const & a )
{
	this->_name = a.getName();
    return ;
}