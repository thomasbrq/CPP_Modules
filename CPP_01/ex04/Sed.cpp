/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 11:46:32 by tbraquem          #+#    #+#             */
/*   Updated: 2022/07/28 12:52:38 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(std::string filename, std::string s1, std::string s2)
: filename(filename), s1(s1), s2(s2)
{

}

Sed::~Sed(void){}

std::string	Sed::_sedWorker(std::string string)
{
	int	found;

	found = string.find(this->s1);
	if (found == -1)
		return (string);
	string.erase(found, this->s1.length());
	string.insert(found, this->s2);
	return (string);
}

void Sed::replace()
{
	std::string		line;
	std::ifstream	file(this->filename);

	if (!file)
	{
		std::cout << "File error.." << std::endl;
		exit(1);
	}

	std::ofstream	save(this->filename + ".replace");

	while (std::getline(file, line))
	{
		line = this->_sedWorker(line);
		save << line << std::endl;
	}
	file.close();
	save.close();
}
