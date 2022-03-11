/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 15:25:41 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/11 04:58:18 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{

private:
    
    std::string _name;
    int         _hitPoints;
    int         _energyPoints;
    int         _attackDamage;

public:

    ClapTrap( std::string const name );
    ClapTrap( ClapTrap & cpy );
    
    ~ClapTrap();

    void    attack(const std::string& target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);

    std::string getName( void ) const ;

    void operator= (ClapTrap const & a);

};
#endif