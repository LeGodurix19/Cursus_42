
#include "ClapTrap.hpp"

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

ClapTrap::~ClapTrap()
{
    std::cout << "Come back ClapTrap !" << std::endl;
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