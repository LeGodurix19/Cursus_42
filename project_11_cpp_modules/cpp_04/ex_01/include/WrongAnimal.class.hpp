/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 11:00:25 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/09 10:18:39 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_CLASS_HPP
# define WRONGANIMAL_CLASS_HPP

# include "all.hpp"

class WrongAnimal
{
protected:

    std::string _type;

public:

    WrongAnimal( void );
    WrongAnimal( WrongAnimal & src );
    virtual ~WrongAnimal( void );

    virtual void        makeSound ( void ) const;
    virtual std::string getType( void ) const ;

    void operator= (WrongAnimal const & a);

};

#endif