/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 11:42:19 by tbraquem          #+#    #+#             */
/*   Updated: 2022/07/28 12:44:06 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon
{
	public:
		Weapon(void);
		explicit Weapon(std::string type);
		~Weapon(void);

		std::string	getType(void) const;
		void		setType(std::string	type);

	private:
		std::string	_type;
};

#endif
