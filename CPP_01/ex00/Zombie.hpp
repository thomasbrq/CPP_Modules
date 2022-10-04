/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 17:44:49 by tbraquem          #+#    #+#             */
/*   Updated: 2022/07/05 10:58:56 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie(void);

		void announce(void);

	private:
		std::string _name;
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

#endif
