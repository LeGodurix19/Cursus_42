/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:08:50 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/09 10:26:54 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS_HPP
# define BRAIN_CLASS_HPP

#include "all.hpp"

class Brain
{
private:
    
    std::string *_ideas;

public:

    Brain( void );
    Brain( Brain & src );
    ~Brain( void );
    
    std::string getIdea( int position ) const;

    void operator= (Brain const & a);
};

#endif