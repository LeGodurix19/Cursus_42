/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 17:12:31 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/06 17:23:09 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap , public FragTrap
{

private:

    std::string _name;

public:

    DiamondTrap( std::string const name );
    ~DiamondTrap();

    using FragTrap::_hitPoints;
	using ScavTrap::_energyPoints;
	using FragTrap::_attackDamage;
	using ScavTrap::attack;

    void	whoAmI();

};

#endif