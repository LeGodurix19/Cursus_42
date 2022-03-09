/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 10:06:50 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/09 10:19:31 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGDOG_CLASS_HPP
# define WRONGDOG_CLASS_HPP

# include "all.hpp"

class WrongDog : public WrongAnimal
{
    
private:
    
    std::string  _type;

public:

    WrongDog( void );
    WrongDog( WrongDog & src );
    ~WrongDog( void );

    void        makeSound( void ) const ;
    std::string getType( void ) const ;

    void operator= (WrongDog const & a);

};

#endif