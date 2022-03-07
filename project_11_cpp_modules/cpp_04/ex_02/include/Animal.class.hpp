/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 10:06:59 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/07 16:59:30 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP

# include "all.hpp"

class AAnimal
{
protected:

    AAnimal( void );
    AAnimal( AAnimal & src );

    std::string _type;

public:

    
    virtual ~AAnimal( void )  = 0;

    virtual void        makeSound ( void ) const;
    virtual std::string getType( void ) const ;

};

#endif