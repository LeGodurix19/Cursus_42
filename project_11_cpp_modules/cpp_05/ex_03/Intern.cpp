/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugoorickx <hugoorickx@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 11:43:59 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/30 18:03:23 by hugoorickx       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"

/********************/
/*                  */
/*  Constructor     */
/*                  */
/********************/

Intern::Intern( void )
{
    return ;
}

Intern::Intern( Intern & )
{
    return ;
}

/********************/
/*                  */
/*  Destructor      */
/*                  */
/********************/

Intern::~Intern( void )
{
    return ;
}

/********************/
/*                  */
/*  Fct membre      */
/*                  */
/********************/

Form    *Intern::makeForm(std::string const type, std::string const target)
{
    int     i = 0;
    Form    *ret;
	std::string	forms[] = {"robotomy request", "shrubbery creation", "presidential pardon"};
	
	while(i < 3 && type != forms[i])
		i++;
	switch (i)
	{
		case 0:
			ret = new RobotomyRequestForm(target);
			break;
		case 1:
			ret = new ShrubberyCreationForm(target);
			break;
		case 2:
			ret = new PresidentialPardonForm(target);
			break;
		default:
			ret = NULL;
	}
	return(ret);
}