/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 11:42:48 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/10 11:11:43 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/********************/
/*                  */
/*  Constructor     */
/*                  */
/********************/

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name)
{
    if ( grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
       this-> _garde = grade;

    return ;
}

Bureaucrat::Bureaucrat( Bureaucrat & cpy ) : _name(cpy.getName()), _garde(cpy.getGrade())
{
    return ;
}

/********************/
/*                  */
/*  Destructor      */
/*                  */
/********************/

Bureaucrat::~Bureaucrat()
{
    return ;
}

/********************/
/*                  */
/*  Over operator   */
/*                  */
/********************/

void    Bureaucrat::operator=(const Bureaucrat& op)
{
    this->_name = op.getName();
    this->_garde = op.getGrade();
    return ;
}

std::ostream& operator<< ( std::ostream &flux, Bureaucrat const& Bureaucrat )
{
    flux << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade() << std::endl;
    return flux;
}

/********************/
/*                  */
/*  Fct membre      */
/*                  */
/********************/

std::string Bureaucrat::getName( void ) const
{
    return (this->_name);
}

void Bureaucrat::up( void )
{
    if (this->_garde - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->_garde -= 1;
    return ;
}

void Bureaucrat::down( void )
{
    if (this->_garde + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_garde += 1;
    return ;
}

int Bureaucrat::getGrade( void ) const
{
    return (this->_garde);
}

void				Bureaucrat::signForm(Form & form)
{
	if (form.getSign())
    {
		std::cout << this->_name << " cant sign " << form.getName();
        std::cout << " because he see that is already signed." << std::endl;
    }
	else
		try
		{
			form.beSigned(*this);
			std::cout << this->_name << " signs " << form.getName() << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << this->_name << " cant sign " << form.getName() << " because ";
			std::cout << e.what() << std::endl;
		}
}

/********************/
/*                  */
/*  Exception       */
/*                  */
/********************/

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade is too low");
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade is too high");
}
