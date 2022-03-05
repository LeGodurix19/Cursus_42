/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 14:59:24 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/05 15:25:36 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie *zombieHorde( int nb, std::string name )
{
    Zombie *tmp = new Zombie[nb];
    
    for(int i = 0; i < nb ; i++)
    {
        tmp[i].setName(name + std::to_string(i));
        tmp[i].announce();
    }
    return (tmp);
}