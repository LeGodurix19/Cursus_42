/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 21:31:14 by hugoorickx        #+#    #+#             */
/*   Updated: 2022/03/22 18:20:54 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template< typename T >
class Array 
{

private:

	T *				_array;
	unsigned int	_n;
    
public:

/********************/
/*                  */
/*  Constructor     */
/*                  */
/********************/

	Array( void ) : _n(0) { _array = new T[0]; }
	Array( unsigned int n ) : _n(n) { this->_array = new T[n]; }
	Array( Array const & ref ) : _n(ref.size())
	{
		this->_array = new T[this->_n];
		for (unsigned int i = 0; i < this->_n; i++)
			_array[i] = ref.getArray()[i];
	}

/********************/
/*                  */
/*  Destructor      */
/*                  */
/********************/

	~Array( void ) { delete [] this->_array; }

/********************/
/*                  */
/*  Over operator   */
/*                  */
/********************/

	void operator= ( Array const & ref )
	{
		this->_n = ref.size();
		delete [] this->_array;
		this->_array = new T[this->_n];
		for (unsigned int i = 0; i < this->_n; i++)
			_array[i] = ref.getArray()[i];

	}

	T & operator[]( unsigned int i )
	{
		if (i < 0 || i >= this->_n)
			throw(std::exception());
		return (this->_array[i]);
	}

/********************/
/*                  */
/*  Fct membre      */
/*                  */
/********************/

	T *	getArray() const { return (_array); }

    T 	getOneLine( int i ) const { return (_array[i]); }

	unsigned int size() const { return (_n); }

    void    printArray( void )
	{
		for (unsigned int i = 0; i < this->_n; i++)
			std::cout << "["<< i << "] => "<< this->getOneLine(i) << std::endl;
	}

};

#endif