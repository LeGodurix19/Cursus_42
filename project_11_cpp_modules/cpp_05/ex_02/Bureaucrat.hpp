/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 11:42:52 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/10 21:56:49 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

#include "Form.hpp"
class Form;

class Bureaucrat
{
private:
    
    std::string _name;
    int         _garde;

public:

    Bureaucrat( std::string const name, int grade );
    Bureaucrat( Bureaucrat & cpy );

    ~Bureaucrat();

    std::string getName( void ) const;
    
    int         getGrade( void ) const;

    void    operator=(const Bureaucrat& op);
    void    up( void );
    void    down( void );
    void	signForm(Form & form);
    void    executeForm(Form & form);

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

std::ostream    &operator<<(std::ostream & out, const Bureaucrat & bureaucrat);

#endif