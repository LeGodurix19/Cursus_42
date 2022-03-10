/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 11:44:02 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/11 00:32:33 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Form.hpp"

class Intern
{
    
public:

    Intern( void );
    Intern( Intern & cpy );

    ~Intern( void );

    Form    *makeForm(std::string const type, std::string const target);
    
    void    operator=(const Bureaucrat& op);
    
};

#endif