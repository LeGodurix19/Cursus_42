/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 18:08:28 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/05 18:20:22 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main()
{
	Karen ppl;

	ppl.complain("DEBUG");
	ppl.complain("INFO");
	ppl.complain("WARNING");
	ppl.complain("ERROR");
	ppl.complain("BE KIND");
}