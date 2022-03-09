/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 16:28:52 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/09 10:04:57 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

private:

public:
    ScavTrap( std::string name );
    ~ScavTrap();

    void    attack(std::string const & target);
    void    guardGate( void );

    void operator= (ScavTrap const & a);
};

#endif