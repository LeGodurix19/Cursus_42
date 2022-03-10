/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 11:43:09 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/10 11:17:16 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

#include "Bureaucrat.hpp"


class Bureaucrat;

class Form
{
private:
    
    std::string         _name;
    bool                _sign;
    int                 _gradeSign;
    int                 _gradeExec;

public:

    Form(std::string const name, int gradeSign, int gradeExec);
    Form(const Form& op);
    
    ~Form( void );

    std::string getName( void ) const ;

    bool        getSign( void ) const ;

    int         getGradeSign( void ) const ;
    int         getGradeExec( void ) const ;

    void    operator=(const Form& op);
    void    beSigned(Bureaucrat & a);

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