/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 17:28:24 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/09 10:49:59 by hgoorick         ###   ########.fr       */
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

    void operator= (AMateria const & a);

};

#endif