/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 11:43:40 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/10 22:00:15 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
    
    void    launch( Bureaucrat const & executor ) const;

public:

    RobotomyRequestForm( std::string target );
    RobotomyRequestForm( RobotomyRequestForm & cpy );

    ~RobotomyRequestForm( void );

    void    operator=(const RobotomyRequestForm& op);
    
};

#endif
