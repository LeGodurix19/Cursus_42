/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 11:08:08 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/08 20:28:16 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	vect_prod( Point const a, Point const b, Point const c )
{
	return (a.get_x() - c.get_x()) * (b.get_y() - c.get_y()) - (b.get_x() - c.get_x()) * (a.get_y() - c.get_y());
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed	vec1, vec2, vec3;
	 bool has_neg, has_pos;
	vec1 = vect_prod(point, a, b);
    vec2 = vect_prod(point, b, c);
    vec3 = vect_prod(point, c, a);

	if (vec1 == 0 || vec2 == 0 || vec3 == 0)
		return (0);
	
    has_neg = (vec1 < 0) || (vec2 < 0) || (vec3 < 0);
    has_pos = (vec1 > 0) || (vec3 > 0) || (vec3 > 0);

    return !(has_neg && has_pos);
}

int main()
{
	Point a(0, 4);
	Point b(4, 7);
	Point c(6, 1);
	Point p(3, 4);
	Point r(2, 3);

	std::cout << bsp(a, b, c, p) << std::endl;
	std::cout << bsp(a, b, c, a) << std::endl;
	std::cout << bsp(a, b, c, r) << std::endl;
}