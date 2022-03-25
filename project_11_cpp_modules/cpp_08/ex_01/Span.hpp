/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugoorickx <hugoorickx@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 08:45:31 by hugoorickx        #+#    #+#             */
/*   Updated: 2022/03/25 13:39:20 by hugoorickx       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <list>
# include <array>
# include <vector>
# include <iterator>
# include <algorithm>

class Span
{
private:
    
    int             _maxNb;
    std::list<int>	_lst;

public:

    Span( int const & nb );
    Span( Span const & cpy );

    ~Span( void );

    std::list<int>  getLst( void ) const ;
    int             getMax( void ) const ;

    long long shortestSpan( void ) const;
    long long longestSpan( void ) const;

    void    addNumber( int const & i );

    Span &  operator=( Span const & op );

    template < class Iterator >
    void        addNumber(Iterator begin, Iterator end)
    {
        if (end - begin <= _maxNb)
            std::copy(begin, end, std::back_inserter(this->_lst));
        else
            throw(NotEnoughSpace());
    }

    class NotEnoughSpace : public std::exception
    {
        public :
            virtual const char* what() const throw();
    };

    class Full : public std::exception
    {
        public :
            virtual const char* what() const throw();
    };

    class CantSpan : public std::exception
    {
        public :
            virtual const char* what() const throw();
    };
};

#endif