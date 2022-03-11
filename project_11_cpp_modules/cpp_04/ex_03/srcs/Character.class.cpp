/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 17:33:19 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/11 19:37:16 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/all.hpp"

Character::Character( std::string const & name ) : _name(name)
{
	for (int i = 0; i < 4; i++)
	{
		this->_inv[i] = NULL;
	}
	return;
}

Character::Character( Character & cpy ) : _name(cpy.getName())
{
	for (int i = 0; i < 4; i++)
		this->_inv[i] = cpy.getInv(i);
	return;
}

Character::~Character()
{
	return ;
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void 				Character::use(int idx, ICharacter& target)
{
	if (this->_inv[idx])
		this->_inv[idx]->use(target);
}

void 				Character::equip(AMateria* m)
{
	int i = 0;

	while (this->_inv[i] && i < 4)
		i++;
    
	if (i < 4)
        this->_inv[i] =m;
}

void 				Character::unequip(int idx)
{
	this->_inv[idx] = NULL;
}

AMateria *			Character::getInv(int idx ) const
{
	if (idx >= 0 && idx < 4 )
		return (this->_inv[idx]);
	return (NULL);
}

void Character::operator= (Character const & a)
{
    this->_name = a.getName();
	for (int i = 0; i < 4; i++)
		this->_inv[i] = a.getInv(i);
    return ;
}