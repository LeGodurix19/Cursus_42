/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conv.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:53:09 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/12 10:18:52 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONV_CLASS_HPP
# define CONV_CLASS_HPP

# include <iostream>

class Conv
{
private:
    
    int     _isInt;
    int     _isChar;
    int     _valInt;
    char    _valChar;
    float   _valFloat;
    double  _valDouble;

public:

    Conv( void );
    Conv( std::string in );
    Conv( Conv const & cpy );

    ~Conv( void );

    int     getValInt( void ) const;
    int     getIsInt( void ) const;
    int     getIsChar( void ) const;
    
    char    getValChar( void ) const;
    
    float   getValFloat( void ) const;
    
    double  getValDouble( void ) const;

    void    operator=(const Conv& op);

};

#endif