/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:08:46 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/09 10:28:00 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/all.hpp"

Brain::Brain( void )
{
    this->_ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = "Miam !";
    std::cout << "Sooooo ideas" << std::endl;
    return ;
}

Brain::Brain( Brain & src )
{
    this->_ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = src.getIdea(i);
    std::cout << "Sooooo ideas(but it's a copy)" << std::endl;
    return ;
}

Brain::~Brain( void )
{
    delete [] (this->_ideas);
    std::cout << "I forget everything" << std::endl;
    return ;
}

std::string Brain::getIdea( int position ) const
{
    return (this->_ideas[position % 100]);
}

void Brain::operator= ( Brain const & a)
{
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = a.getIdea(i);
    return ;
}