/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:13:16 by hugoorickx        #+#    #+#             */
/*   Updated: 2022/07/25 12:04:56 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITERATOR_HPP
# define ITERATOR_HPP

namespace ft
{
	struct input_iterator_tag													{};
	struct output_iterator_tag													{};
	struct forward_iterator_tag : public input_iterator_tag						{};
	struct bidirectional_iterator_tag  : public forward_iterator_tag			{};
	struct random_access_iterator_tag  : public bidirectional_iterator_tag		{};

	template<typename _Iter>
	struct iterator_traits
	{
		typedef typename _Iter::iterator_category	iterator_category;
		typedef typename _Iter::value_type			value_type;
		typedef typename _Iter::difference_type		difference_type;
		typedef typename _Iter::pointer				pointer;
		typedef typename _Iter::reference			reference;
	};

	template<typename _T>
	struct iterator_traits<_T*>
	{
		typedef random_access_iterator_tag	iterator_category;
		typedef _T							value_type;
		typedef ptrdiff_t					difference_type;
		typedef _T*							pointer;
		typedef _T&							reference;
	};

	template<typename _T>
	struct iterator_traits<const _T*>
	{
		typedef random_access_iterator_tag	iterator_category;
		typedef _T							value_type;
		typedef ptrdiff_t					difference_type;
		typedef const _T*					pointer;
		typedef const _T&					reference;
	};

	template<class Category, class T, class Distance = std::ptrdiff_t, class Pointer = T*, class Reference = T&>
	struct iterator
	{
		typedef Category					iterator_category;
		typedef T							value_type;
		typedef Distance					difference_type;
		typedef Pointer						pointer;
		typedef Reference					reference;
	};

	template<typename _Iter>
	class reverse_iterator
	{
		public:
			typedef _Iter													iterator_type;
			typedef typename ft::iterator_traits<_Iter>::iterator_category	iterator_category;
			typedef typename ft::iterator_traits<_Iter>::value_type			value_type;
			typedef typename ft::iterator_traits<_Iter>::difference_type	difference_type;
			typedef typename ft::iterator_traits<_Iter>::pointer			pointer;
			typedef typename ft::iterator_traits<_Iter>::reference			reference;

		protected:
			_Iter m_current;

		public:

			reverse_iterator() : m_current()												{ return ; }
			explicit reverse_iterator(iterator_type x) : m_current(x)						{ return ; }

			template<class U>
			reverse_iterator(const reverse_iterator<U>&other) : m_current(other.base())		{ return ; }

			iterator_type base() const														{ return m_current; }

			template<class U>
			reverse_iterator& operator=(const reverse_iterator<U>& other)
			{
				m_current = other.base();
				return *this;
			}

			reference operator*() const
			{
				_Iter tmp = m_current;
				return *--tmp;
			}

			pointer operator->() const														{ return &(operator*()); }

			// ++it
			reverse_iterator& operator++()
			{
				m_current--;
				return *this;
			}

			// --it
			reverse_iterator& operator--()
			{
				m_current++;
				return *this;
			}

			// it++
			reverse_iterator operator++(int)
			{
				reverse_iterator tmp = *this;
				m_current--;
				return tmp;
			}

			// it--
			reverse_iterator operator--(int)
			{
				reverse_iterator tmp = *this;
				m_current++;
				return tmp;
			}

			reverse_iterator operator+(difference_type n) const								{ return reverse_iterator(base() - n); }
			reverse_iterator operator-(difference_type n) const								{ return reverse_iterator(base() + n); }
			reference operator[](difference_type n) const									{ return *(*this + n); }

			reverse_iterator operator+=(difference_type n)
			{
				m_current -= n;
				return *this;
			}

			reverse_iterator operator-=(difference_type n)
			{
				m_current += n;
				return *this;
			}
	};

	template<class Iter1, class Iter2>
	bool operator==(const ft::reverse_iterator<Iter1>& lhs, const ft::reverse_iterator<Iter2>&rhs)													{ return lhs.base() == rhs.base(); }

	template<class Iter1, class Iter2>
	bool operator!=(const ft::reverse_iterator<Iter1>& lhs, const ft::reverse_iterator<Iter2>&rhs)													{ return lhs.base() != rhs.base(); }

	template<class Iter1, class Iter2>
	bool operator<(const ft::reverse_iterator<Iter1>& lhs, const ft::reverse_iterator<Iter2>&rhs)													{ return lhs.base() > rhs.base(); }

	template<class Iter1, class Iter2>
	bool operator<=(const ft::reverse_iterator<Iter1>& lhs, const ft::reverse_iterator<Iter2>&rhs)													{ return lhs.base() >= rhs.base(); }

	template<class Iter1, class Iter2>
	bool operator>(const ft::reverse_iterator<Iter1>& lhs, const ft::reverse_iterator<Iter2>&rhs)													{ return lhs.base() < rhs.base(); }

	template<class Iter1, class Iter2>
	bool operator>=(const ft::reverse_iterator<Iter1>& lhs, const ft::reverse_iterator<Iter2>&rhs)													{ return lhs.base() <= rhs.base(); }

	template<class Iter>
	reverse_iterator<Iter> operator+(typename ft::reverse_iterator<Iter>::difference_type n, const ft::reverse_iterator<Iter>& it) 					{ return it + n; }

	template<class Iter1, class Iter2>
	typename reverse_iterator<Iter1>::difference_type operator-(const ft::reverse_iterator<Iter1>& lhs, const ft::reverse_iterator<Iter2>& rhs) 	{ return rhs.base() - lhs.base(); }

	template<class InputIt>
	InputIt next(InputIt first, typename ft::iterator_traits<InputIt>::difference_type n = 1)
	{
		while (n--)
			++first;
		return first;
	}

	template<class BidirectionalIt>
	BidirectionalIt prev(BidirectionalIt first, typename ft::iterator_traits<BidirectionalIt>::difference_type n = 1)
	{
		while (n--)
			--first;
		return first;
	}

}

#endif
