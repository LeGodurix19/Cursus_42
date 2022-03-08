/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 17:29:02 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/08 11:09:36 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CLASS_HPP
# define CHARACTER_CLASS_HPP

#include "../include/all.hpp"

class Character : public ICharacter
{
    
private:
    
    std::string _name;
    AMateria    *(_inv[4]);

public:

    Character( std::string const & name );
    Character( Character & cpy );
    ~Character();

    std::string const & getName() const;

    AMateria *			getInv(int idx );

    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);

};

#endif