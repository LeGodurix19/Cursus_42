/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 17:29:47 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/08 10:51:59 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_CLASS_HPP
# define CURE_CLASS_HPP

#include "../include/all.hpp"

class Cure : public AMateria
{

public:

    Cure( void );
    ~Cure( void );

    AMateria* clone() const;
    void use(ICharacter & target);

};

#endif