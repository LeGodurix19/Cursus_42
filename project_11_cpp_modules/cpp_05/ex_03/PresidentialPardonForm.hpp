/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 11:43:34 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/10 21:59:30 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:

    void    launch( Bureaucrat const & executor ) const;

public:

    PresidentialPardonForm( std::string target );
    PresidentialPardonForm( PresidentialPardonForm & cpy );

    ~PresidentialPardonForm( void );

    void    operator=(const PresidentialPardonForm& op);

};

#endif
