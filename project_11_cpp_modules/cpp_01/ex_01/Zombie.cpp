/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 14:56:19 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/05 15:13:02 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
    return ;
}

Zombie::Zombie(std::string in) : _name(in)
{
    return ;
}

Zombie::~Zombie( void )
{
    std::cout << "Goodbye" << std::endl;
    return;
}

void    Zombie::announce( void ) const
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}

void    Zombie::setName(std::string name)
{
    this->_name = name;
    return ;
}