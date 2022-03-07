/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 18:08:31 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/07 16:51:13 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>

class Karen
{

private:

    void debug( void );
    void info( void );
    void warning( void );
    void error( void );

public:

    Karen( void );
    ~Karen( void );

    void complain( std::string level );
};
#endif