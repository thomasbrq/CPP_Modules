/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 11:30:05 by tbraquem          #+#    #+#             */
/*   Updated: 2022/07/01 11:37:52 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "String memory address = " << &string << std::endl;
	std::cout << "StringPTR memory address = " << stringPTR << std::endl;
	std::cout << "StringREF memory address = " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "String value = " << string << std::endl;
	std::cout << "StringPTR value = " << *stringPTR << std::endl;
	std::cout << "StringREF value = " << stringREF << std::endl;

	return (0);
}
