
#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string const name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
        return ;
}

ClapTrap::~ClapTrap()
{
    return ;
}
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

std::string ClapTrap::getName( void ) const
{
    return (this->_name);
}

void ClapTrap::operator= ( ClapTrap const & a )
{
	this->_name = a.getName();
    return ;
}