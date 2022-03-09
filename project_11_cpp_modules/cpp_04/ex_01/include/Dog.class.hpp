/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 10:06:50 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/09 10:26:05 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP

# include "all.hpp"

class Dog : public Animal
{
    
private:
    
    std::string  _type;
    Brain       *_brain;

public:

    Dog( void );
    Dog( Dog & src );
    ~Dog( void );

    void        makeSound( void ) const ;
    std::string getType( void ) const ;
    Brain       *getBrain( void ) const ;

    void operator= (Dog const & a);

};

#endif