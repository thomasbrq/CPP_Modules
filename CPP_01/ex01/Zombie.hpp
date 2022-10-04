/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 17:44:49 by tbraquem          #+#    #+#             */
/*   Updated: 2022/07/05 11:00:10 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie
{
	public:
		Zombie(void);
		explicit Zombie(std::string name);
		~Zombie(void);

		void announce(void);

	private:
		std::string _name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif
