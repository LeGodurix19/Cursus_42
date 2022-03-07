/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 10:07:16 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/07 17:00:15 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/all.hpp"

int main()
{
{
	const AAnimal* (animals[10]);
	
	for	(int i = 0; i < 10; i++)
	{
		if (i % 2)
			animals[i] = new Cat;
		else
			animals[i] = new Dog;
	}
	std::cout << "---------------" << std::endl;
	for	(int i = 0; i < 10; i++)
	{
		animals[i]->makeSound();
	}
	std::cout << "---------------" << std::endl;
	for	(int i = 0; i < 10; i++)
	{
		delete animals[i];
	}
}
std::cout << "=================" << std::endl;
{
	Cat * mew = new Cat;
	Cat * mew2 = new Cat( *mew );
	Dog * dog = new Dog;
	Dog * dog2 = new Dog( *dog );

	delete dog;
	delete dog2;
	delete mew;
	delete mew2;
}
}