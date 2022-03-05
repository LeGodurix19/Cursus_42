/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 17:14:43 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/05 17:26:47 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
private:

    std::string _name;
    Weapon      *_weapon;  

public:

    HumanB( std::string name );
    ~HumanB();  

    void		attack( void );
		
	std::string	get_name( void );
	Weapon		*get_weapon( void );

	void		set_name( std::string name );
	void		setWeapon( Weapon &weapon );

};
#endif