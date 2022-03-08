/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 17:28:24 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/08 10:54:17 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_CLASS_HPP
# define AMATERIA_CLASS_HPP

#include "../include/all.hpp"

class AMateria
{
protected:

    std::string _type;

public:
    
    AMateria( std::string const & type );

    virtual AMateria* clone( void ) const = 0;
    
    virtual void use( ICharacter& target ) = 0;

    std::string const & getType( void ) const;

};

#endif