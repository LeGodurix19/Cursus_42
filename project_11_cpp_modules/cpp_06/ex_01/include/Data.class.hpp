/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 10:26:03 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/12 10:41:57 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_CLASS_HPP
# define DATA_CLASS_HPP

# include <iostream>

class Data
{

private:
    
    std::string _test;

public:

    Data( void );
    Data( std::string const & str );
    Data( Data const & cpy );
    
    ~Data( void );

    std::string getTest( void ) const;
    
    void    operator=(const Data& op);
    
};

#endif