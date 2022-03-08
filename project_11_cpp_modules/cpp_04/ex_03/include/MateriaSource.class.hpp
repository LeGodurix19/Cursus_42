/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.class.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 17:31:06 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/08 10:40:29 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_CLASS_HPP
# define MATERIASOURCE_CLASS_HPP

#include "all.hpp"

class MateriaSource	: public IMateriaSource 
{

private:

	AMateria	*(_inv[4]);

public:

	MateriaSource();
	~MateriaSource();

	void learnMateria(AMateria*);

	AMateria* createMateria(std::string const & type);


};

#endif