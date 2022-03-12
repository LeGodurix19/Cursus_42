/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conv.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:18:07 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/12 10:59:49 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Conv.class.hpp"

/********************/
/*                  */
/*  Constructor     */
/*                  */
/********************/

Conv::Conv( void ) : _valInt(0), _valChar(0), _valFloat(0), _valDouble(0)
{
    return ;
}

Conv::Conv( std::string in )
{
    int		valInt = std::atoi(in.c_str());
	double	valFloat = std::atof(in.c_str());

    if ( in.length() == 1 && isprint(in[0]) && in[0] != '0' && !valInt)
	{
		this->_valChar = in[0];
		this->_isChar = 1;
		this->_valInt = static_cast<int>(in[0]);
		this->_isInt = 1;
		this->_valFloat = static_cast<float>(in[0]);
		this->_valDouble = static_cast<double>(in[0]);
	}
    else
    {
        this->_valChar = static_cast<int>(valInt);
        this->_isChar = isprint(valInt);
        this->_isInt = valInt;
        this->_valInt = valInt;
        if (in[0] == '0')
            this->_isInt = 1;
        this->_valFloat = static_cast<float>(valFloat);
        this->_valDouble = static_cast<double>(valFloat);
    }
    return ;
}

Conv::Conv( Conv const & cpy ) : _isInt(cpy.getIsInt()), _isChar(cpy.getIsChar()), _valInt(cpy.getValInt()), _valChar(cpy.getValChar()), _valFloat(cpy.getValFloat()), _valDouble(cpy.getValDouble())
{
    return ;
}

/********************/
/*                  */
/*  Destructor      */
/*                  */
/********************/

Conv::~Conv( void )
{
    return ;
}

/********************/
/*                  */
/*  Over operator   */
/*                  */
/********************/

void    Conv::operator=(const Conv& op)
{
    this->_valInt = op.getValInt();
    this->_valChar = op.getValChar();
    this->_valFloat = op.getValFloat();
    this->_valDouble = op.getValDouble();
    this->_isInt = op.getIsInt();
    this->_isChar = op.getIsChar();
    return ;
}

/********************/
/*                  */
/*  Fct membre      */
/*                  */
/********************/

    /********************/
    /*                  */
    /*  Getter          */
    /*                  */
    /********************/

int    Conv::getValInt( void ) const
{
    return ( this->_valInt);
}

int    Conv::getIsInt( void ) const
{
    return ( this->_isInt);
}

int    Conv::getIsChar( void ) const
{
    return ( this->_isChar);
}

char    Conv::getValChar( void ) const
{
    return ( this->_valChar);
}

float   Conv::getValFloat( void ) const
{
    return ( this->_valFloat);
}

double    Conv::getValDouble( void ) const
{
    return ( this->_valDouble);
}