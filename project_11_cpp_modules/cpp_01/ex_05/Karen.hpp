/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 18:08:31 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/05 18:19:51 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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