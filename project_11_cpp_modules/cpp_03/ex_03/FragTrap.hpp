/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 16:49:34 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/11 05:11:58 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{

private:

public:

    FragTrap( std::string name );
    FragTrap( FragTrap & cpy );
    ~FragTrap();

    void    attack(std::string const & target);
    void    highFivesGuys( void );

    void operator= (FragTrap const & a);
};

#endif