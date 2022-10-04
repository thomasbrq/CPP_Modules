/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:06:09 by tbraquem          #+#    #+#             */
/*   Updated: 2022/07/26 10:15:07 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "PhoneBook created!" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "PhoneBook deleted!" << std::endl;
}

void	PhoneBook::add()
{
	std::string	input;
	Contact 	*a;
	int			last;

	last = this->phonebook[0].getLastContact();
	a = &this->phonebook[last];

	std::cout << "First Name : ";
	std::cin >> input;
	a->first_name = input;

	std::cout << "Last Name : ";
	std::cin >> input;
	a->last_name = input;

	std::cout << "Nickname : ";
	std::cin >> input;
	a->nickame = input;

	std::cout << "Number : ";
	std::cin >> input;
	a->setNumber(input);

	std::cout << "*Shhh* Your darkest secret : ";
	std::cin >> input;
	a->setSecret(input);

	a->incrementLastContact();
}

void	print_input(std::string input)
{
	std::string	temp = input;
	if (temp.length() > 10)
		temp = temp.substr(0, 10).replace(9, 1, ".");
	std::cout << temp;
}

void	PhoneBook::search()
{
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i=0; i < 8; i++)
	{
		std::cout << "|";
		std::cout << std::setw (10);
		std::cout << i;
		std::cout << "|";
		std::cout << std::setfill (' ') << std::setw (10);
		print_input(phonebook[i].first_name);
		std::cout << "|";
		std::cout << std::setfill (' ') << std::setw (10);
		print_input(phonebook[i].last_name);
		std::cout << "|";
		std::cout << std::setfill (' ') << std::setw (10);
		print_input(phonebook[i].nickame);
		std::cout << "|" << std::endl;
	}
	std::cout << "|-------------------------------------------|" << std::endl;
}

void	PhoneBook::quit()
{
	this->~PhoneBook();
	exit(0);
}
