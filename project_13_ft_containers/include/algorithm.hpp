/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:13:11 by hugoorickx        #+#    #+#             */
/*   Updated: 2022/07/25 12:03:58 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALGORITHM_HPP
# define ALGORITHM_HPP

# include "iterator.hpp"
# include "type_traits.hpp"

namespace ft
{
	/****************
	 *	Swap 2 arg	*
	 ****************/
	template<class T>
	void swap(T& a , T& b)
	{
		T tmp = a;
		a = b;
		b = tmp;
	}

	/********************************************
	 *	Check if all 1 are equals with all 2	*
	 ********************************************/
	template<class InputIt1, class InputIt2>
	bool equal(InputIt1 first1, InputIt1 last1, InputIt2 first2)
	{
		while (first1 != last1)
		{
			if (*first1 != *first2)
				return false;
			++first1;
			++first2;
		}
		return true;
	}

	/********************************
	 *	Use p to compare 1 and 2	*
	 ********************************/
	template<class InputIt1, class InputIt2, class BinaryPredicate>
	bool equal(InputIt1 first1, InputIt1 last1, InputIt2 first2, BinaryPredicate p)
	{
		while (first1 != last1)
		{
			if (!p(*first1, *first2))
				return false;
			++first1;
			++first2;
		}
		return (true);
	}

	/************************************************************************************
	 *	Check if all 1 are equals with all 2 but with more check	*
	 ************************************************************************************/
	template<class InputIt1, class InputIt2>
	bool equal(InputIt1 first1, InputIt1 last1, InputIt2 first2, InputIt2 last2)
	{
		return (_equal(first1, last1, first2, last2, typename ft::iterator_traits<InputIt1>::iterator_category(), typename ft::iterator_traits<InputIt2>::iterator_category()));
	}

	/************************************************************************************
	 *	Check if all 1 are equals with all 2 but return false if 2 is smallest than 1	*
	 ************************************************************************************/
	template<class InputIt1, class InputIt2>
	bool _equal(InputIt1 first1, InputIt1 last1, InputIt2 first2, InputIt2 last2, ft::input_iterator_tag, ft::input_iterator_tag)
	{
		while (first1 != last1)
		{
			if ((first2 == last2) || (*first1 != *first2))
				return (false);
			++first1;
			++first2;
		}
		return (first2 == last2);
	}

	/****************************************************************************
	 *	Check if all 1 are equals with all 2 but comapre first and last value	*
	 ****************************************************************************/
	template<class InputIt1, class InputIt2>
	bool _equal(InputIt1 first1, InputIt1 last1, InputIt2 first2, InputIt2 last2, ft::random_access_iterator_tag, ft::random_access_iterator_tag)
	{
		if (last2 - first2 != last1 - first1)
			return (false);
		return (_equal(first1, last1, first2, last2, ft::input_iterator_tag(), ft::input_iterator_tag()));
	}

	/************************************************
	 *	Compare 1 and 2 but it's deeper than equal	*
	 ************************************************/	
	template<class InputIt1, class InputIt2>
	bool lexicographical_compare(InputIt1 first1, InputIt1 last1, InputIt2 first2, InputIt2 last2)
	{
		while (first1 != last1)
		{
			if ((first2 == last2) || (*first2 < *first1))
				return (false);
			if (*first1 < *first2)
				return (true);
			++first1;
			++first2;
		}
		return (first2 != last2);
	}

	/********************************************************************
	 *	Use comp as compare operator 1 and 2 but it's deeper than equal	*
	 ********************************************************************/	
	template <class InputIterator1, class InputIterator2, class Compare>
	bool lexicographical_compare (InputIterator1 first1, InputIterator1 last1, InputIterator2 first2, InputIterator2 last2, Compare comp)
	{
		while (comp(*first1, *first2))
		{
			++first1;
			++first2;
		}
		return (comp(*first1, *first2));
	}

	/************************************
	 *	Deep copy form first to d_first	*
	 ************************************/	
	template<class InputIt, class OutputIt>
	OutputIt copy(InputIt first, InputIt last, OutputIt d_first)
	{
		for (; first != last; *(d_first++) = *(first++));
		return (d_first);
	}

	/************************************
	 *	Deep copy form last to d_last	*
	 ************************************/
	template<class BidirIt1, class BidirIt2>
	BidirIt2 copy_backward(BidirIt1 first, BidirIt1 last, BidirIt2 d_last)
	{
		for (; first != last; *(--d_last) = *(--last))
		return (d_last);
	}

	/************************************************
	 *	Return the distance between first and last	*
	 ************************************************/
	template<class InputIt>
	typename ft::iterator_traits<InputIt>::difference_type distance(InputIt first, InputIt last)
	{
		typename ft::iterator_traits<InputIt>::difference_type n;
		for (n = 0; first != last; ++first, ++n);
		return n;
	}

	/****************************************
	 *	Return the bigest between a and b	*
	 ****************************************/
	template<class T>
	T max(T a, T b)		{ return ((a > b) ? a : b); }

	/****************************************
	 *	Return the smallest between a and b	*
	 ****************************************/
	template<class T>
	T min(T a, T b)		{ return ((a < b) ? a : b); }
};

#endif
