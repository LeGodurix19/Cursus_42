/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 11:43:37 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/10 22:00:07 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/********************/
/*                  */
/*  Constructor     */
/*                  */
/********************/

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : Form("RobotomyForm", target, 72, 45)
{
    srand(time(NULL)); 
    return ;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm & cpy )  : Form(cpy.getName(), cpy.getTarget(), cpy.getGradeSign(), cpy.getGradeExec())
{
    srand(time(NULL)); 
    return ;
}

/********************/
/*                  */
/*  Destructor      */
/*                  */
/********************/

RobotomyRequestForm::~RobotomyRequestForm( void )
{
    return ;
}

/********************/
/*                  */
/*  Over operator   */
/*                  */
/********************/

void    RobotomyRequestForm::operator=(const RobotomyRequestForm& op)
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

void    RobotomyRequestForm::launch( Bureaucrat const & ) const 
{
    std::cout << "Vrrrrr..." << std::endl;
	if (rand() % 2)
		std::cout << this->getTarget() << " was robotomized!" << std::endl;
	else
		std::cout << "The robotization doesn't work..." << std::endl;
}