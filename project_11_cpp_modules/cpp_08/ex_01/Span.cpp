/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugoorickx <hugoorickx@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 08:45:28 by hugoorickx        #+#    #+#             */
/*   Updated: 2022/03/25 13:41:14 by hugoorickx       ###   ########.fr       */
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

std::list<int>  Span::getLst( void ) const
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
    std::list<int>    lst_copy;
    std::list<int>::iterator next, iter, end;
    long min, tmp;

    
    if(this->_lst.size() <= 1)
		throw Span::CantSpan();

    lst_copy = this->_lst;
    lst_copy.sort();
    
    next = lst_copy.begin();
	iter = next++;
	end = lst_copy.end();

	min = std::abs(static_cast<long>(*(next++)) - static_cast<long>(*(iter++)));
	while (next != end)
	{
		tmp = std::abs(static_cast<long>(*(next++)) - static_cast<long>(*(iter++)));
		min = (tmp < min ? min : tmp);
	}

	return (min);
}

long long Span::longestSpan( void ) const
{
    if(this->_lst.size() <= 1)
		throw Span::CantSpan();

    long long p0;
    long long p1;
    
    p0 = *std::min_element(this->_lst.begin(), this->_lst.end());
    p1 = *std::max_element(this->_lst.begin(), this->_lst.end());
    return (p1 - p0);
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
