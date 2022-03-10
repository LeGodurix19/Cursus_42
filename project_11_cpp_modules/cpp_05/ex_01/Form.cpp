/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 11:43:06 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/10 11:17:21 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/********************/
/*                  */
/*  Constructor     */
/*                  */
/********************/

Form::Form(std::string const name, int gradeSign, int gradeExec) : _name(name)
{
    if (gradeSign <= 0 || gradeExec <= 0)
        throw Form::GradeTooHighException();
    else if (gradeSign > 150 || gradeExec > 150)
        throw Form::GradeTooLowException();
    else
        this->_gradeSign = gradeSign;
        this->_gradeExec = gradeExec;
    return ;
}

Form::Form(const Form& op)
{
    this->_name = op.getName();
    this->_sign = op.getSign();
    this->_gradeSign = op.getGradeSign();
    this->_gradeExec = op.getGradeExec();
    return ;
}

/********************/
/*                  */
/*  Destructor      */
/*                  */
/********************/

Form::~Form( void )
{
    return ;
}

/********************/
/*                  */
/*  Over operator   */
/*                  */
/********************/

void    Form::operator=(const Form& op)
{
    this->_name = op.getName();
    this->_sign = op.getSign();
    this->_gradeSign = op.getGradeSign();
    this->_gradeExec = op.getGradeExec();
    return ;
}

std::ostream& operator<< ( std::ostream &flux, Form const& Form )
{
    flux << Form.getName();
    if (Form.getSign())
        flux << " is signed ";
    else
        flux << " isn't signed ";
   flux  << "\n Level to sign : " << Form.getGradeSign() << "\n Level to exec : " << Form.getGradeExec() << std::endl;
    return flux;
}

/********************/
/*                  */
/*  Fct membre      */
/*                  */
/********************/

void    Form::beSigned(Bureaucrat & a)
{
    if (a.getGrade() <= this->getGradeSign())
        this->_sign = true;
    else
        throw Form::GradeTooLowException();
    return ;
}

std::string    Form::getName( void ) const 
{
    return ( this->_name );
}

bool            Form::getSign( void ) const 
{
    return ( this->_sign );
}

int             Form::getGradeSign( void ) const 
{
    return ( this->_gradeSign );
}

int             Form::getGradeExec( void ) const 
{
    return ( this->_gradeExec );
}

/********************/
/*                  */
/*  Exception       */
/*                  */
/********************/

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Grade is too low");
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Grade is too high");
}
