/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.class.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 17:33:38 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/08 10:42:29 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/all.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_inv[i] = NULL;
	return;
}

MateriaSource::~MateriaSource()
{
	return;
}

void		MateriaSource::learnMateria(AMateria* am)
{
	int i = 0;

	while (this->_inv[i])
		i++;
	if (i < 4)
		this->_inv[i] = am;
	return ;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	int i = 0;

	while(i < 4)
	{
		if (this->_inv[i] && this->_inv[i]->getType() == type)
		{
			return(this->_inv[i]->clone());
		}
		i++;
	}
	return(NULL);
}