/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:04:38 by tbraquem          #+#    #+#             */
/*   Updated: 2022/07/26 10:14:57 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>

class Contact
{
	public:
		Contact();
		~Contact();

		void 	setNumber(std::string number);
		void 	setSecret(std::string secret);

		int		getLastContact(void) const;
		void	incrementLastContact(void);

		std::string first_name;
		std::string last_name;
		std::string nickame;

	private:
		std::string	_number;
		std::string	_secret;
		static int	_last_contact;
};


#endif
