/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:00:29 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/14 10:00:48 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

int main()
{
    Form* constitution = new Form("Constitution", 10, 30);
    Form* toHigh;
    Form* toLow;
    
    std::cout << *constitution;
    
    //To high
    std::cout << "\n=== Test to high at start =========" << std::endl;
    try
    {
       toHigh = new Form("ToHigh", 0, 20);
    }
    catch(std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }

    //ToLow
    std::cout << "\n=== Test to low at start ==========" << std::endl;
    try
    {
       toLow = new Form("ToHigh", 10, 199);
    }
    catch(std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "\n=== Test with bob =================" << std::endl;

    Bureaucrat* bob = new Bureaucrat("Bob", 5);
    
    std::cout << *bob;

    bob->signForm(*constitution);

    std::cout << *constitution;

    bob->signForm(*constitution);

    std::cout << "\n=== Test with Nopper ==============" << std::endl;

    Form* nop = new Form("Constitution", 1, 1);
    Bureaucrat* nopper = new Bureaucrat("Nopper", 12);

    nopper->signForm(*nop);
    
    delete constitution;
    delete bob;
    delete nop;
    delete nopper;
}
