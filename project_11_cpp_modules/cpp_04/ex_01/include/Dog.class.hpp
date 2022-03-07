/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 10:06:50 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/07 14:52:55 by hgoorick         ###   ########.fr       */
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


};

#endif