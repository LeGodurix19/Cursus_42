/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 11:46:37 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/05 14:08:01 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact
{

private:

	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_sercet;

public:

	void		setFirst_name( std::string in );
	void		setLast_name( std::string in );
	void		setNickname( std::string in );
	void		setPhone_number( std::string in );
	void		setDarkest_secret( std::string in );
	std::string	getFirst_name( void ) const ;
	std::string	getLast_name( void ) const ;
	std::string	getNickname( void ) const ;
	std::string	getPhone_number( void ) const ;
	std::string	getDarkest_secret( void ) const ;
	Contact( void );
	~Contact( void );

};
