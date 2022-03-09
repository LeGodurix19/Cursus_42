/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 17:33:00 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/09 10:52:03 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/all.hpp"

AMateria::AMateria(std::string const & type) : _type(type)
{
    return ;
}

std::string const & AMateria::getType() const
{
	return (_type);
}

void AMateria::operator= (AMateria const & a)
{
    this->_type = a.getType();
    return ;
}