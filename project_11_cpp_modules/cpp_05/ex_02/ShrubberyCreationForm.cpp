/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 11:43:44 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/10 22:41:41 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"

/********************/
/*                  */
/*  Constructor     */
/*                  */
/********************/

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : Form("ShrubberyCreation", target, 145, 137)
{
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm & cpy ) : Form(cpy.getName(), cpy.getTarget(), cpy.getGradeSign(), cpy.getGradeExec())
{
    return ;
}

/********************/
/*                  */
/*  Destructor      */
/*                  */
/********************/

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
    return ;
}

/********************/
/*                  */
/*  Over operator   */
/*                  */
/********************/

void    ShrubberyCreationForm::operator=(const ShrubberyCreationForm& op)
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

void    ShrubberyCreationForm::launch( Bureaucrat const & ) const 
{
    std::ofstream ofs(this->_target + "_shrubbery");

    if(ofs.is_open())
    {
        ofs << "            .        +          .      .          ." << std::endl;
        ofs << "     .            _        .                    ." << std::endl;
        ofs << "  ,              /;-._,-.____        ,-----.__" << std::endl;
        ofs << " ((        .    (_:#::_.:::. `-._   /:, /-._, `._," << std::endl;
        ofs << "  `                 \\   _|`\"=:_::.`.);  \\ __/ /" << std::endl;
        ofs << "                      ,    `./  \\:. `.   )==-'  ." << std::endl;
        ofs << "    .      ., ,-=-.  ,\\, +#./`   \\:.  / /           ." << std::endl;
        ofs << ".           \\/:/`-' , ,\\ '` ` `   ): , /_  -o" << std::endl;
        ofs << "       .    /:+- - + +- : :- + + -:'  /(o-) \\)     ." << std::endl;
        ofs << "  .      ,=':  \\    ` `/` ' , , ,:' `'--\".--\"---._/`7" << std::endl;
        ofs << "   `.   (    \\: \\,-._` ` + '\\, ,\"   _,--._,---\":.__/" << std::endl;
        ofs << "              \\:  `  X` _| _,\\/'   .-'" << std::endl;
        ofs << ".               \":._:`\\____  /:'  /      .           ." << std::endl;
        ofs << "                    \\::.  :\\/:'  /              +" << std::endl;
        ofs << "   .                 `.:.  /:'  }      ." << std::endl;
        ofs << "           .           ):_(:;   \\           ." << std::endl;
        ofs << "                      /:. _/ ,  |" << std::endl;
        ofs << "                   . (|::.     ,`                  ." << std::endl;
        ofs << "     .                |::.    {\\" << std::endl;
        ofs << "                      |::.\\  \\ `." << std::endl;
        ofs << "                      |:::(\\    |" << std::endl;
        ofs << "              O       |:::/{ }  |                  (o" << std::endl;
        ofs << "               )  ___/#\\::`/ (O \"==._____   O, (O  /`" << std::endl;
        ofs << "          ~~~w/w~\"~~,\\` `:/,-(~`\"~~~~~~~~\"~o~\\~/~w|/~" << std::endl;
        ofs.close();
    }
}