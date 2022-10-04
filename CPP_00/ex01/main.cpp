/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 14:52:04 by tbraquem          #+#    #+#             */
/*   Updated: 2022/07/26 10:15:02 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	parser(std::string cmd, PhoneBook *book)
{
	if (cmd.compare("ADD") == 0)
		book->add();
	else if (cmd.compare("SEARCH") == 0)
		book->search();
	else if (cmd.compare("EXIT") == 0)
		book->quit();
	else
		std::cout << "Command not found! Available commands: [ADD, SEARCH, EXIT]" << std::endl;
}

int	main(void)
{
	PhoneBook	book;
	std::string	cmd;

	while (42)
	{
		std::cout << "PhoneBook > ";
		std::cin >> cmd;
		parser(cmd, &book);
	}

	return (0);
}
