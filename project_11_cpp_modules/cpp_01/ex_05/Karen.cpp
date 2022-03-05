/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 18:08:24 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/05 18:22:15 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen( void )
{
    return ;
}

Karen::~Karen( void )
{
    return ;
}

void Karen::complain( std::string level )
{
    void		(Karen::*ft[4])( void ) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
    std::string val[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i=0 ; i < 4 ; i++)
    {
        if (!val[i].compare(level))
        {
            (this->*(ft[i]))();
            return ;
        }
    }
    std::cout << "I don't care" << std::endl;
}

void Karen::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
    return ;
}
void Karen::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
    return ;
}
void Karen::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
    return ;
}
void Karen::error( void )
{
    std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
    return ;
}
