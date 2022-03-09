/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 17:33:34 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/09 11:04:54 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/all.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	AMateria* tmp;
	
	tmp = src->createMateria("ice");
	me->equip(tmp);
	me->equip(src->createMateria("cure"));
	me->equip(src->createMateria("cure"));
	me->equip(src->createMateria("cure"));
	me->equip(src->createMateria("cure"));
	me->equip(src->createMateria("cure"));
	me->equip(src->createMateria("cure"));
	me->equip(src->createMateria("cure"));

	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(2, *bob);
		
	delete bob;
	delete me;
	delete src;
	return 0;
}