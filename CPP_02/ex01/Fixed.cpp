/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 10:12:59 by tbraquem          #+#    #+#             */
/*   Updated: 2022/08/03 11:16:43 by tbraquem         ###   ########.fr       */
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

Fixed::Fixed(const int n) : _bits(8)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(n << 8);
}

Fixed::Fixed(const float n) : _bits(8)
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(roundf((n * 256)));
}

Fixed &Fixed::operator=(const Fixed &f)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(f.getRawBits());
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed &f)
{
	os << f.toFloat();
	return os;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	return (this->_fixed_float);
}

void	Fixed::setRawBits(const int raw)
{
	this->_fixed_float = raw;
}

float	Fixed::toFloat(void) const
{
	int		n;
	int		sign;
	float	ret;

	sign = 1;
	n = this->_fixed_float;
	if ((n & (1 << 8))) // Check the MSB bit.
	{
		sign = -1;
		n = -n;
	}
	ret = (1.0f * n) / pow(2, 8);
	ret *= sign;
	return (ret);
}

int		Fixed::toInt(void) const
{
	return (this->_fixed_float >> 8);
}
