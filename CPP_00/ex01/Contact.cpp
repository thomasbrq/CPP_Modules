/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:07:21 by tbraquem          #+#    #+#             */
/*   Updated: 2022/07/26 10:14:47 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() : first_name(""), last_name(""), nickame(""), _number(""),
					 _secret("")
{

}

Contact::~Contact()
{

}

int		Contact::_last_contact = 0;

void 	Contact::setNumber(std::string number)
{
	if (!number.empty())
		this->_number = number;
}

void 	Contact::setSecret(std::string secret)
{
	if (!secret.empty())
		this->_number = secret;
}

int		Contact::getLastContact(void) const
{
	return (Contact::_last_contact);
}

void	Contact::incrementLastContact()
{
	Contact::_last_contact += 1;
	if (Contact::_last_contact == 8)
		Contact::_last_contact = 0;
}
