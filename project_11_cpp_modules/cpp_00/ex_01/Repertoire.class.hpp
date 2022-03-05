/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Repertoire.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 11:28:21 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/05 14:07:21 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

class Repertoire
{
private:
	Contact list[8];

public:
	Contact		getContact(int position) const ;
	void		setFirst_name( int position, std::string in );
	void		setLast_name( int position, std::string in );
	void		setNickname( int position, std::string in );
	void		setPhone_number( int position, std::string in );
	void		setDarkest_secret( int position, std::string in );
	Repertoire( void );
	~Repertoire( void );
};
