/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 15:00:41 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/05 15:26:12 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde( int nb, std::string name );

int main(void)
{
    Zombie *horde = zombieHorde(10, "Kyle");
    std::cout << "In main :"<< std::endl;
    for (int i = 0; i < 10; i++)
        horde[i].announce();
    std::cout << std::endl;
    delete [] horde;
    return (0);
}