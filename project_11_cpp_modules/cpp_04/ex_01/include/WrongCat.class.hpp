/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 10:06:33 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/09 10:18:52 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_CLASS_HPP
# define WRONGCAT_CLASS_HPP

# include "all.hpp"

class WrongCat : public WrongAnimal
{

private:
    
    std::string _type;

public:

    WrongCat( void );
    WrongCat( WrongCat & src );
    ~WrongCat();

    void        makeSound( void ) const ;
    std::string getType( void ) const ;
    
    void operator= (WrongCat const & a);

};

#endif