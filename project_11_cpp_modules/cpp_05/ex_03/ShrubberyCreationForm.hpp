/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 11:43:46 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/10 22:12:33 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:

    void    launch( Bureaucrat const & executor ) const;

public:

    ShrubberyCreationForm( std::string target );
    ShrubberyCreationForm( ShrubberyCreationForm & cpy );
    
    ~ShrubberyCreationForm( void );

    void    operator=(const ShrubberyCreationForm& op);
    
};

#endif
