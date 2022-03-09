/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 11:43:09 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/09 12:51:19 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

class Form
{
private:
    
    std::string const   _name;
    bool                _sign;
    int                 _gradeSign;
    int                 _gradeExec;

public:

    Form(std::string const name, bool sign, int gradeSign, int gradeExec);
    ~Form( void );

    void    operator=(const Form& op);

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

Form::Form(std::string const name, bool sign, int gradeSign, int gradeExec) : _name(name), _sign(sign)
{
    if (gradeSign < 1 || gradeExec < 1)

    else if (gradeSign > 150 || gradeExec > 150)
    
    else
        this->_gradeSign(gradeSign);
        this->_gradeExec(gradeExec);
    return ;
}

Form::~Form( void )
{
    return ;
}

void    Form::operator=(const Form& op)
{
    this->_name = op.getName();
    this->_garde = op.getGrade();
    this->_gradeSign = op.getGradeSign();
    this->_gradeExec = op.getGradeExec();
    return ;
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade is too low");
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade is too high");
}
