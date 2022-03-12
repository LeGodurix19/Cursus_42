/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 11:07:57 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/12 11:30:32 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../include/ABC.class.hpp"

void identify( Base* p );
void identify(Base& p);

Base * generate( void )
{
    int		r = rand() % 3;

	switch (r)
	{
		case 0:
			return ( new A );
		case 1:
			return ( new B );
		default:
			return ( new C );
	}
	
}

int main ( void )
{
    Base *	test;

    srand(time(0));
    
/*************/
/* Test 1    */
/*************/

    std::cout << "== Test 1 ==================================" << std::endl;

    test = generate();
    
    std::cout << "Identify with Reference -> ";
	identify(test);

    std::cout << "Identify with Pointer -> ";
	identify(*test);

	delete test;

/*************/
/* Test 2    */
/*************/

    std::cout << "== Test 2 ==================================" << std::endl;

    test = generate();

    std::cout << "Identify with Reference -> ";
	identify(test);

    std::cout << "Identify with Pointer -> ";
	identify(*test);

	delete test;

/*************/
/* Test 3    */
/*************/

    std::cout << "== Test 3 ==================================" << std::endl;

    test = generate();

    std::cout << "Identify with Reference -> ";
	identify(test);

    std::cout << "Identify with Pointer -> ";
	identify(*test);
    
	delete test;

    return (0);
}