/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 11:43:09 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/10 23:04:52 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <fstream>
# include <string>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
protected:
    
    std::string         _name;
    std::string         _target;
    bool                _sign;
    int                 _gradeSign;
    int                 _gradeExec;

    virtual void        launch( Bureaucrat const & executor ) const;

public:

    Form(std::string const name, std::string const target, int gradeSign, int gradeExec);
    Form(const Form& op);
    
    virtual ~Form( void );

    std::string getName( void ) const ;
    std::string getTarget( void ) const ;

    bool        getSign( void ) const ;

    int         getGradeSign( void ) const ;
    int         getGradeExec( void ) const ;

    void        operator=(const Form& op);
    void        executed( Bureaucrat const & a );
    void        beSigned(Bureaucrat & a);

    class GradeTooHighException : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };
    
    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };

};

std::ostream    &operator<<(std::ostream & out, const Form & Form);

#endif