/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 10:12:59 by tbraquem          #+#    #+#             */
/*   Updated: 2022/07/29 11:41:10 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixed_float(0), _bits(8)
{
	std::cout << "Default constructor called" << std::endl;
	(void) _bits;
}

Fixed::Fixed(const Fixed &f) : _bits(8)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed &Fixed::operator=(const Fixed& f)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixed_float = f._fixed_float;
	this->setRawBits(f.getRawBits());
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (0);
}

void	Fixed::setRawBits(const int raw)
{
	(void) raw;
}
