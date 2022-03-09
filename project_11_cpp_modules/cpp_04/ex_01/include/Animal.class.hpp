/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 10:06:59 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/09 10:18:01 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP

# include "all.hpp"

class Animal
{
protected:

    std::string _type;

public:

    Animal( void );
    Animal( Animal & src );
    virtual ~Animal( void );

    virtual void        makeSound ( void ) const;
    virtual std::string getType( void ) const ;

    void operator= (Animal const & a);

};

#endif