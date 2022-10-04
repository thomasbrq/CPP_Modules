/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 11:46:35 by tbraquem          #+#    #+#             */
/*   Updated: 2022/07/06 14:50:44 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP
#include <iostream>
#include <fstream>
#include <ostream>

class Sed
{
public:

	Sed(std::string filename, std::string s1, std::string s2);
	~Sed(void);

	void	replace(void);

	std::string filename;
	std::string s1;
	std::string s2;

private:
	std::string	_sedWorker(std::string string);
};

#endif
