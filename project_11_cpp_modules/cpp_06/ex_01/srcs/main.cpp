/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 10:43:54 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/12 10:57:14 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/Data.class.hpp"

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

int main( void )
{
	Data		data("Please give 100%");
	Data *		ret;
	uintptr_t	ser;

/********************/
/*					*/
/*	Check data		*/
/*					*/
/********************/

	std::cout << "== From data ===============\n" << std::endl;
	std::cout << data.getTest() << std::endl;

/********************/
/*					*/
/*	After serialize	*/
/*					*/
/********************/

	std::cout << "\n== After serialize =========\n" << std::endl;
	ser = serialize(&data);
	std::cout << ser << std::endl;

/************************/
/*						*/
/*	After deserialize	*/
/*						*/
/************************/

	std::cout << "\n== After deserialize =======\n" << std::endl;
	ret = deserialize(ser);
	std::cout << ret->getTest() << std::endl;
	std::cout << "\n============================" << std::endl;

}