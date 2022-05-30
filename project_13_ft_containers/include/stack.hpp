/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugoorickx <hugoorickx@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:13:51 by hugoorickx        #+#    #+#             */
/*   Updated: 2022/05/30 13:41:04 by hugoorickx       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_HPP
#define STACK_HPP

#include "vector.hpp"

namespace ft
{

	template<class T, class Container = ft::vector<T> >
	class stack
	{

/************************/
/*						*/
/* PUBLIC				*/
/*						*/
/************************/

		public:

	/************************/
	/*						*/
	/* TYPEDEF				*/
	/*						*/
	/************************/

			typedef Container								container_type;
			typedef typename Container::value_type			value_type;
			typedef typename Container::size_type			size_type;
			typedef typename Container::reference			reference;
			typedef typename Container::const_reference		const_reference;

	/************************/
	/*						*/
	/* CONSTRUCTOR			*/
	/*						*/
	/************************/

			explicit stack(const Container& c = Container()) : c(c)		{ return ; }
			stack(const stack& s) : c(s.c)								{ return ; }

	/************************/
	/*						*/
	/* EMPTY				*/
	/*						*/
	/************************/

			bool empty() const					{ return c.empty(); }

	/************************/
	/*						*/
	/* SIZE					*/
	/*						*/
	/************************/
	
			size_type size() const				{ return c.size(); }

	/************************/
	/*						*/
	/* TOP					*/
	/*						*/
	/************************/

			reference top()						{ return c.back(); }
			const_reference top() const			{ return c.back(); }

	/************************/
	/*						*/
	/* PUSH					*/
	/*						*/
	/************************/

			void push(const value_type& val)	{ c.push_back(val); }

	/************************/
	/*						*/
	/* POP					*/
	/*						*/
	/************************/

			void pop()							{ c.pop_back(); }

	/************************/
	/*						*/
	/* RELATIONAL OPERATOR	*/
	/*						*/
	/************************/

			friend bool operator==(const stack<T, Container>& lhs, const stack<T, Container>& rhs)	{ return lhs.c == rhs.c; }
			friend bool operator!=(const stack<T, Container>& lhs, const stack<T, Container>& rhs)	{ return lhs.c != rhs.c; }
			friend bool operator<(const stack<T, Container>& lhs, const stack<T, Container>& rhs)	{ return lhs.c < rhs.c; }
			friend bool operator<=(const stack<T, Container>& lhs, const stack<T, Container>& rhs)	{ return lhs.c <= rhs.c; }
			friend bool operator>(const stack<T, Container>& lhs, const stack<T, Container>& rhs)	{ return lhs.c > rhs.c; }
			friend bool operator>=(const stack<T, Container>& lhs, const stack<T, Container>& rhs)	{ return lhs.c >= rhs.c; }
		
/************************/
/*						*/
/* PROTECTED			*/
/*						*/
/************************/

		protected:
			container_type c;
	};
}

#endif 
