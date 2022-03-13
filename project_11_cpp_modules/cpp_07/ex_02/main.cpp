/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugoorickx <hugoorickx@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 21:31:20 by hugoorickx        #+#    #+#             */
/*   Updated: 2022/03/13 21:53:51 by hugoorickx       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main( void )
{
    {
        Array<int> a(5);
        Array<int> empty;

        std::cout << "==== After init a ================" << std::endl;
        a.printArray();

        std::cout << "\n==== After modif a[2] ==========" << std::endl;
        a[2] = 5;
        a.printArray();

        std::cout << "\n==== After init b ==============" << std::endl;
        Array<int> b(a);
        b.printArray();

        std::cout << "\n==== After modif b[2] ==========" << std::endl;
        b[2] = 19;
        b.printArray();

        std::cout << "\n==== After copy a to b =========" << std::endl;
        a = b;
        a.printArray();
        b.printArray();

        std::cout << "\n==== All sizes =================" << std::endl;
        std::cout << "The size of a : " <<  a.size() << std::endl;
        std::cout << "The size of b : " <<  b.size() << std::endl;
        std::cout << "The size of empty : " <<  empty.size() << std::endl;
        
        std::cout << "\n==== Try to go out of the array =" << std::endl;
        try
        {
            std::cout << a[5] << std::endl;
            std::cout << "Bug" << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cout << "It's work" << std::endl;
        }
    }
    std::cout << "--------------" << std::endl;
    {
        std::cout << "With float" << std::endl;
        Array<float> a(5);
        Array<float> empty;

        std::cout << "==== After init a ================" << std::endl;
        a.printArray();

        std::cout << "\n==== After modif a[2] ==========" << std::endl;
        a[2] = 5.2;
        a.printArray();

        std::cout << "\n==== After init b ==============" << std::endl;
        Array<float> b(a);
        b.printArray();

        std::cout << "\n==== After modif b[2] ==========" << std::endl;
        b[2] = 19.19;
        b.printArray();

        std::cout << "\n==== After copy a to b =========" << std::endl;
        a = b;
        a.printArray();
        b.printArray();

        std::cout << "\n==== All sizes =================" << std::endl;
        std::cout << "The size of a : " <<  a.size() << std::endl;
        std::cout << "The size of b : " <<  b.size() << std::endl;
        std::cout << "The size of empty : " <<  empty.size() << std::endl;
        
        std::cout << "\n==== Try to go out of the array =" << std::endl;
        try
        {
            std::cout << a[5] << std::endl;
            std::cout << "Bug" << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cout << "It's work" << std::endl;
        }
    }
}