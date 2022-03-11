/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 15:25:41 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/11 05:01:20 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{

protected:
    
    std::string _name;
    int         _hitPoints;
    int         _energyPoints;
    int         _attackDamage;

public:

    ClapTrap( std::string const name , int const hitPoints, int const energyPoints, int const attackDamage);
    ClapTrap( std::string const name );
    ClapTrap( ClapTrap & cpy );

    ~ClapTrap();

    void    attack(const std::string& target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);

    std::string getName( void ) const ;
    int         getHitPoints( void ) const;
    int         getEnergyPoints( void ) const;
    int         getAttackDamage( void ) const;

    void operator= (ClapTrap const & a);
};
#endif