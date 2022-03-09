/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 17:30:04 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/09 10:46:35 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_CLASS_HPP
# define ICE_CLASS_HPP

#include "../include/all.hpp"

class Ice : public AMateria
{

public:

    Ice( void );
    ~Ice( void );

    AMateria* clone() const;
    void use(ICharacter & target);

    void operator= (Ice const & a);

};

#endif