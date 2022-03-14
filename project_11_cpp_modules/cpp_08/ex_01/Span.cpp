/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 08:45:28 by hugoorickx        #+#    #+#             */
/*   Updated: 2022/03/14 19:10:42 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

/********************/
/*                  */
/*  Constructor     */
/*                  */
/********************/

Span::Span( int const & nb ) : _maxNb(nb)
{
    return ;
}

Span::Span( Span const & cpy) : _maxNb(cpy.getMax()), _lst(cpy.getLst())
{
    return ;
}

/********************/
/*                  */
/*  Destructor      */
/*                  */
/********************/

Span::~Span( void )
{
    return ;
}

/********************/
/*                  */
/*  Over operator   */
/*                  */
/********************/

Span & Span::operator=( Span const & op )
{
	if (this == &op)
		return (*this);
	this->_maxNb = op.getMax();
	this->_lst = op.getLst();
	return (*this);
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

std::vector<int>  Span::getLst( void ) const
{
    return ( this->_lst );
}

int Span::getMax( void ) const
{
    return ( this->_maxNb );
}

    /********************/
    /*                  */
    /*  Fct membre      */
    /*                  */
    /********************/

long long Span::shortestSpan( void ) const
{
    if(this->_lst.size() <= 1)
		throw Span::CantSpan();

    long long p0;
    long long p1;
    long long dif;
    
    dif = (long)this->_lst[0] - (long)this->_lst[1];
    for (int x = 0; x < this->_maxNb; x++)
    {
        p0 = (long)this->_lst[x];
        for (int y = 0; y < this->_maxNb; y++)
        {
            p1 = (long)this->_lst[y];
            if (x != y && dif > p0 - p1 && (p0 - p1) >= 0)
                    dif = p0 - p1;
            if (!dif)
                return ((unsigned long)dif);
        }
    }
    return ((unsigned long)dif);
}

long long Span::longestSpan( void ) const
{
    if(this->_lst.size() <= 1)
		throw Span::CantSpan();

    long long p0;
    long long p1;
    long long dif;
    
    dif = this->_lst[0] - this->_lst[1];
    for (int x = 0; x < this->_maxNb; x++)
    {
        p0 = this->_lst[x];
        for (int y = 0; y < this->_maxNb; y++)
        {
            p1 = this->_lst[y];
            if (x != y && dif < p0 - p1 && (p0 - p1) >= 0)
                    dif = p0 - p1;
        }
    }
    return (dif);
}
void    Span::addNumber( int const & i )
{
	if (this->_lst.size() < (unsigned long)this->_maxNb)
		this->_lst.push_back(i);
	else
		throw Span::Full();
	return ;
}

/********************/
/*                  */
/*  Exception       */
/*                  */
/********************/

const char* Span::NotEnoughSpace::what() const throw()
{
    return ("Not Enough Space");
}

const char* Span::Full::what() const throw()
{
    return ("It's full");
}

const char* Span::CantSpan::what() const throw()
{
    return ("Cant Span");
}
