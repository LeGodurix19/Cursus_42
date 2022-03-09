/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 10:06:33 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/09 10:43:12 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP

# include "all.hpp"

class Cat : public AAnimal
{

private:
    
    std::string _type;
    Brain       *_brain;

public:

    Cat( void );
    Cat( Cat & src );
    ~Cat();

    void        makeSound( void ) const ;
    std::string getType( void ) const ;
    Brain       *getBrain( void ) const ;

    void operator= (Cat const & a);

};

#endif