/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <hgoorick@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 11:59:22 by hgoorick          #+#    #+#             */
/*   Updated: 2022/03/05 14:06:32 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Repertoire.class.hpp"
#include <iomanip>

std::string answer( std::string question)
{
	std::string input;

	std::cout << question;
	std::cin >> input;
	while (!input.length())
	{
		std::cout << question;
		std::cin >> input;
	}
	return (input);
}

void	size_ok(std::string in)
{
	std::cout << "|";
	if (in.length() > 10)
		std::cout << in.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << std::left << in;
}

void	ft_print(Contact contact, int position)
{
	std::cout << "| " << position+ 1 << " ";
	size_ok(contact.getFirst_name());
	size_ok(contact.getLast_name());
	size_ok(contact.getNickname());
	std::cout << "|" << std::endl;
	std::cout << "+---+----------+----------+----------+" << std::endl;
}

void	ft_print_all(Contact contact)
{
	std::cout << "First name: " << contact.getFirst_name() << std::endl;
	std::cout << "Last name: " << contact.getLast_name() << std::endl;
	std::cout << "Nickname: " << contact.getNickname() << std::endl;
	std::cout << "Phone number: " << contact.getPhone_number() << std::endl;
	std::cout << "Darkest secret: " << contact.getDarkest_secret() << std::endl;
}

bool isNumber(const std::string& str)
{
    for (int i = 0; i < (int)str.length(); i++)
        if (std::isdigit(str[i]) == 0) return false;
    return true;
}

int main(void)
{
	Repertoire rep;
	int			tmp;
	int         status = 0;
	int         position = 0;
	std::string input;

	while (!status)
	{
		std::cout << "<3 > ";
		std::cin >> input;
		if (!input.compare("ADD"))
		{
			rep.setFirst_name(position, answer("Fisrt name > "));
			rep.setLast_name(position, answer("Last name > "));
			rep.setNickname(position, answer("Nickname > "));
			rep.setPhone_number(position, answer("Phone number > "));
			rep.setDarkest_secret(position, answer("Darkest secret > "));
			position++;
			if (position == 8)
				position = 0;
		}
		else if (!input.compare("SEARCH"))
		{
			std::cout << "+---+----------+----------+----------+" << std::endl;
			for (int i = 0; i < 8; i++)
				ft_print(rep.getContact(i), i);
			input = answer("Which one > ");
			while (!isNumber(input))
				input = answer("Which one > ");
			tmp = stoi(input) - 1;
			ft_print_all(rep.getContact(tmp));
		}
		else if (!input.compare("EXIT"))
			break ;
	}
}