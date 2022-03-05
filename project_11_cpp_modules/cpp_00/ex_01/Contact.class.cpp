/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 11:46:05 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/05 14:08:03 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

void    Contact::setFirst_name(std::string in)
{
	this->_first_name = in;
	return ;
}

void    Contact::setLast_name(std::string in)
{
	this->_last_name = in;
	return ;
}

void    Contact::setNickname(std::string in)
{
	this->_nickname = in;
	return ;
}

void    Contact::setPhone_number(std::string in)
{
	this->_phone_number = in;
	return ;
}

void    Contact::setDarkest_secret(std::string in)
{
	this->_darkest_sercet = in;
	return ;
}

std::string	Contact::getFirst_name(void) const
{
	return (this->_first_name);
}
std::string	Contact::getLast_name(void) const
{
	return (this->_last_name);
}
std::string	Contact::getNickname(void) const
{
	return (this->_nickname);
}
std::string	Contact::getPhone_number(void) const
{
	return (this->_phone_number);
}
std::string	Contact::getDarkest_secret(void) const
{
	return (this->_darkest_sercet);
}

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}