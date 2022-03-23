/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 21:19:11 by hugoorickx        #+#    #+#             */
/*   Updated: 2022/03/22 18:18:39 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "iter.hpp"

void	test_int(int const & nb)
{
	std::cout << "Int value => " << nb << std::endl;
}

void	test_float(float const & nb)
{
	std::cout << "Float value => " << nb << std::endl;
}

int main()
{
	std::cout << "== Test with int array ========" << std::endl;
	int nb[] = {1, 2, 3, 4, 5};
	iter<int>(nb, 5, test_int);

	std::cout << "== Test with float array ======" << std::endl;
	float fnb[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	iter<float>(fnb, 5, test_float);
}