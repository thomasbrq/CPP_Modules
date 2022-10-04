/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:07:18 by tbraquem          #+#    #+#             */
/*   Updated: 2022/07/26 10:15:16 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();

		void	add(void);
		void	search(void);
		void	quit(void);

		Contact phonebook[8];
};

#endif
