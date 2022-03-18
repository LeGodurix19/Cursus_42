/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugoorickx <hugoorickx@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 08:45:38 by hugoorickx        #+#    #+#             */
/*   Updated: 2022/03/18 13:51:19 by hugoorickx       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <list>
# include <iostream>
# include <algorithm>

template< typename T > 
class MutantStack : public std::stack<T>
{
    public:

        typedef typename std::stack<T>::container_type::iterator                iterator;
        typedef typename std::stack<T>::container_type::const_iterator          const_iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator        reverse_iterator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator  const_reverse_iterator;

        MutantStack() : std::stack<T>() 
        {
            return ;
        }

        MutantStack(const MutantStack& copy) : std::stack<T>(copy)
        {
            return ;
        }

        virtual ~MutantStack( void ) 
        {
            return ;
        }

        MutantStack &operator=(const MutantStack &op)
        {
            if (this == &op)
                return (*this);
            std::stack<T>::operator=(op);
            return (*this);
        }

        iterator begin( void )
        {
            return (std::stack<T>::c.begin());
        }

        const_iterator begin( void ) const
        {
            return (std::stack<T>::c.begin()); 
        }

        iterator end( void )
        {
            return (std::stack<T>::c.end()); 
        }

        const_iterator end( void ) const
        {
            return (std::stack<T>::c.end()); 
        }

        reverse_iterator rbegin( void )
        {
            return (std::stack<T>::c.rbegin()); 
        }

        const_reverse_iterator rbegin( void ) const
        {
            return (std::stack<T>::c.rbegin()); 
        }
        
        reverse_iterator rend( void )
        {
            return (std::stack<T>::c.rend()); 
        }

        const_reverse_iterator rend( void ) const
        {
            return (std::stack<T>::c.rend());
        }

};

#endif