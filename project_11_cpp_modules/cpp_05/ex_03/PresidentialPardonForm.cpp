/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 11:43:32 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/10 21:59:13 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/********************/
/*                  */
/*  Constructor     */
/*                  */
/********************/

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : Form("PresidentialPardonForm", target, 25, 5)
{
    return ;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm & cpy ) : Form(cpy.getName(), cpy.getTarget(), cpy.getGradeSign(), cpy.getGradeExec())
{
    return ;
}

/********************/
/*                  */
/*  Destructor      */
/*                  */
/********************/

PresidentialPardonForm::~PresidentialPardonForm( void )
{
    return ;
}

/********************/
/*                  */
/*  Over operator   */
/*                  */
/********************/

void    PresidentialPardonForm::operator=(const PresidentialPardonForm& op)
{
    this->_target = op.getTarget();
    this->_name = op.getName();
    this->_sign = op.getSign();
    this->_gradeSign = op.getGradeSign();
    this->_gradeExec = op.getGradeExec();
    return ;
}

/********************/
/*                  */
/*  Fct membre      */
/*                  */
/********************/

void    PresidentialPardonForm::launch( Bureaucrat const & ) const 
{
    std::cout << this->getTarget() << " was pardonned by Zafod Beeblebrox." << std::endl;
}