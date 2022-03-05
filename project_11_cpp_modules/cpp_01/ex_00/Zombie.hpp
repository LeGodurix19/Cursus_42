/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 14:47:58 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/05 15:01:54 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <new>

class Zombie
{

private:
    std::string _name;

public:
    Zombie( void );
    Zombie(std::string in);
    ~Zombie( void );

    void    announce( void ) const ;

};
