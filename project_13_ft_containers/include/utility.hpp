/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utility.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugoorickx <hugoorickx@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:15:40 by hugoorickx        #+#    #+#             */
/*   Updated: 2022/05/19 23:14:16 by hugoorickx       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILITY_HPP
# define UTILITY_HPP

namespace ft
{
	template<class T1, class T2>
	struct pair
	{
		T1 first;
		T2 second;

		pair() : first(), second()													{ return; }
		pair(const T1& first, const T2& second) : first(first), second(second)		{ return; }
		pair(const pair& other) : first(other.first), second(other.second)			{ return; }

		template<class U1, class U2>
		pair(const pair<U1, U2>& p) : first(p.first), second(p.second)				{ return; }

		pair& operator=(const pair& other)
		{
			if (this != &other)
			{
				first = other.first;
				second = other.second;
			}
			return *this;
		}
	};

	template<class T1, class T2>
	pair<T1, T2> make_pair(T1 first, T2 second)								{ return pair<T1, T2>(first, second); }

	template<class T1, class T2>
	bool operator==(const pair<T1, T2>& lhs, const pair<T1, T2>& rhs)		{ return lhs.first == rhs.first && lhs.second == rhs.second; }

	template<class T1, class T2>
	bool operator!=(const pair<T1, T2>& lhs, const pair<T1, T2>& rhs)		{ return !(lhs == rhs); }

	template<class T1, class T2>
	bool operator<(const pair<T1, T2>& lhs, const pair<T1, T2>& rhs)		{ return lhs.first < rhs.first || (lhs.first == rhs.first && lhs.second < rhs.second); }

	template<class T1, class T2>
	bool operator>=(const pair<T1, T2>& lhs, const pair<T1, T2>& rhs)		{ return !(lhs < rhs); }

	template<class T1, class T2>
	bool operator>(const pair<T1, T2>& lhs, const pair<T1, T2>& rhs)		{ return rhs < lhs; }

	template<class T1, class T2>
	bool operator<=(const pair<T1, T2>& lhs, const pair<T1, T2>& rhs)		{ return !(rhs < lhs); }
}

#endif
