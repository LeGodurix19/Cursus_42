/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 15:00:41 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/05 15:05:21 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump( std::string name );
Zombie* newZombie( std::string name );

int main(void)
{
    Zombie * kyle = new Zombie("Kyle Crane");
    Zombie * rais;

    kyle->announce();
    delete kyle;

    rais = newZombie("Rais");
    rais->announce();
    delete rais;

    randomChump("Brecken");
    return (0);
}