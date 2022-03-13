/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugoorickx <hugoorickx@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 11:39:45 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/13 21:18:11 by hugoorickx       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main ( void )
{
    std::cout << "==== First test ========" << std::endl;
    
    int a = 2;
    int b = 3;
    
    std::cout << " -> Before swap:" << std::endl;
    std::cout << "      a = " << a << ", b = " << b << std::endl;

    ::swap( a, b );

    std::cout << " -> After swap:" << std::endl;
    std::cout << "      a = " << a << ", b = " << b << std::endl;
    
    std::cout << " -> Min:" << std::endl;
    std::cout << "      min( a, b ) = " << ::min( a, b ) << std::endl;
    
    std::cout << " -> Max:" << std::endl;
    std::cout << "      max( a, b ) = " << ::max( a, b ) << std::endl;
    
/************************/
/*                      */
/*  Test with strings   */
/*                      */
/************************/

    std::cout << "==== Other test ========" << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    
    std::cout << " -> Before swap:" << std::endl;
    std::cout << "      c = " << c << ", d = " << d << std::endl;

    ::swap(c, d);

    std::cout << " -> After swap:" << std::endl;
    std::cout << "      c = " << c << ", d = " << d << std::endl;
    
    std::cout << " -> Min:" << std::endl;
    std::cout << "      min( c, d ) = " << ::min( c, d ) << std::endl;
    
    std::cout << " -> Max:" << std::endl;
    std::cout << "      max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}