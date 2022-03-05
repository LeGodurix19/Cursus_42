/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 17:03:22 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/05 17:26:14 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
private:

    std::string _name;
    Weapon      &_weapon;  

public:

    HumanA( std::string name, Weapon &weapon );
    ~HumanA();  

    void		attack( void );
		
	std::string	get_name( void );
	Weapon		&get_weapon( void );

	void		set_name( std::string name );
	void		setWeapon( Weapon weapon );

};
#endif