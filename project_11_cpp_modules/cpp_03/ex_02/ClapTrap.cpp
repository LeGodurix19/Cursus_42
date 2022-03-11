/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 04:59:03 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/11 05:03:12 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/********************/
/*                  */
/*  Constructor     */
/*                  */
/********************/

ClapTrap::ClapTrap( std::string const name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Wake up ClapTrap !" << std::endl;
    return ;
}

ClapTrap::ClapTrap( std::string const name , int const hitPoints, int const energyPoints, int const attackDamage) : _name(name), _hitPoints(hitPoints), _energyPoints(energyPoints), _attackDamage(attackDamage)
{
    std::cout << "Wake up ClapTrap !" << std::endl;
    return ;
}

ClapTrap::ClapTrap( ClapTrap & cpy ) : _name(cpy.getName()), _hitPoints(cpy.getHitPoints()), _energyPoints(cpy.getEnergyPoints()), _attackDamage(cpy.getAttackDamage())
{
    std::cout << "Wake up ClapTrap !" << std::endl;
    return ;
}

/********************/
/*                  */
/*  Destructor      */
/*                  */
/********************/

ClapTrap::~ClapTrap()
{
    std::cout << "Come back ClapTrap !" << std::endl;
    return ;
}

/********************/
/*                  */
/*  Fct membre      */
/*                  */
/********************/

    /********************/
    /*                  */
    /*  Getter          */
    /*                  */
    /********************/

std::string ClapTrap::getName( void ) const
{
    return (this->_name);
}

int ClapTrap::getHitPoints( void ) const
{
    return (this->_hitPoints);
}
int ClapTrap::getEnergyPoints( void ) const
{
    return (this->_energyPoints);
}
int ClapTrap::getAttackDamage( void ) const
{
    return (this->_attackDamage);
}

    /********************/
    /*                  */
    /*  Other           */
    /*                  */
    /********************/
    
void    ClapTrap::attack(const std::string& target)
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
    std::cout << this->_name;
    std::cout << " attacks ";
    std::cout << target;
    std::cout << ", causing ";
    std::cout << this->_attackDamage;
    std::cout << " points of damage!" << std::endl;
    this->_energyPoints--;

    return ;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints <= 0)
    {
        std::cout <<  this->_name << " is dead!" << std::endl;
        return;
    }
    std::cout << this->_name;
    std::cout << " lose ";
    std::cout << amount;
    std::cout << " hit points!" << std::endl;
    this->_hitPoints -= amount;
    return ;
}

void    ClapTrap::beRepaired(unsigned int amount)
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
    std::cout << this->_name;
    std::cout << " receive ";
    std::cout << amount;
    std::cout << " hit points!" << std::endl;
    this->_hitPoints += amount;
    this->_energyPoints--;
    return ;
}

/********************/
/*                  */
/*  Overoperator    */
/*                  */
/********************/

void ClapTrap::operator= ( ClapTrap const & a )
{
	this->_name = a.getName();
    return ;
}