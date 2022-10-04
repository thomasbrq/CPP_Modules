/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 10:12:59 by tbraquem          #+#    #+#             */
/*   Updated: 2022/08/02 15:44:56 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
_____                  _                   _
/ ____|               | |                 | |
| |     ___  _ __  ___| |_ _ __ _   _  ___| |_ ___  _ __ ___
| |    / _ \| '_ \/ __| __| '__| | | |/ __| __/ _ \| '__/ __|
| |___| (_) | | | \__ \ |_| |  | |_| | (__| || (_) | |  \__ \
\_____\___/|_| |_|___/\__|_|   \__,_|\___|\__\___/|_|  |___/
*/

Fixed::Fixed(void) : _fixed_float(0), _bits(8)
{
	// std::cout << "Default constructor called" << std::endl;
	(void) _bits;
}

Fixed::Fixed(const Fixed &f) : _bits(8)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed::Fixed(const int n) : _bits(8)
{
	// std::cout << "Int constructor called" << std::endl;
	this->_fixed_float = (n  << 8);
}

Fixed::Fixed(const float n) : _bits(8)
{
	// std::cout << "Float constructor called" << std::endl;
	this->_fixed_float = roundf((n * 256));
}

/*
_____             _                   _
|  __ \          | |                 | |
| |  | | ___  ___| |_ _ __ _   _  ___| |_ ___  _ __ ___
| |  | |/ _ \/ __| __| '__| | | |/ __| __/ _ \| '__/ __|
| |__| |  __/\__ \ |_| |  | |_| | (__| || (_) | |  \__ \
|_____/ \___||___/\__|_|   \__,_|\___|\__\___/|_|  |___/
*/

Fixed::~Fixed(void)
{
	// std::cout << "Destructor called" << std::endl;
}

/*
____                       	 _
/ __ \                     	| |
| |  | |_ __   ___ _ __ __ _| |_ ___  _ __ ___
| |  | | '_ \ / _ \ '__/ _` | __/ _ \| '__/ __|
| |__| | |_) |  __/ | | (_| | || (_) | |  \__ \
\____/| .__/ \___|_|  \__,_|\__\___/|_|  |___/
	 | |
	 |_|
*/

Fixed &Fixed::operator=(const Fixed &f)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(f.getRawBits());
	return (*this);
}

Fixed			&Fixed::operator+(const Fixed &f)
{
	int	result = this->getRawBits() + f.getRawBits();

	this->setRawBits(result);
	return (*this);
}

Fixed			&Fixed::operator-(const Fixed &f)
{
	int	result = this->getRawBits() - f.getRawBits();

	this->setRawBits(result);
	return (*this);
}

Fixed			&Fixed::operator*(const Fixed &f)
{
	long	result = (long)this->getRawBits() * (long)f.getRawBits();

	result = result >> 8;
	this->setRawBits((int) result);
	return (*this);
}

Fixed			&Fixed::operator/(const Fixed &f)
{
	int	a = (this->getRawBits() * (1 << 8)) / f.getRawBits();

	this->setRawBits(a);
	return (*this);
}

Fixed			&Fixed::operator++() // Prefix
{
	int	result = this->getRawBits();

	this->setRawBits(++result);
	return (*this);
}

Fixed			Fixed::operator++(int) // Postfix
{
	Fixed	temp = *this;

	operator++();
	return (temp);
}

Fixed			&Fixed::operator--() // Prefix
{
	int	result = this->getRawBits();

	this->setRawBits(--result);
	return (*this);
}

Fixed			Fixed::operator--(int) // Postfix
{
	Fixed	temp = *this;

	operator--();
	return (temp);
}

std::ostream& operator<<(std::ostream& os, const Fixed &f)
{
	os << f.toFloat();
	return os;
}

bool			Fixed::operator==(const Fixed &r)
{
	return ( this->getRawBits() == r.getRawBits() ? true : false );
}
bool			Fixed::operator!=(const Fixed &r)
{
	return ( this->getRawBits() != r.getRawBits() ? true : false );
}

bool			Fixed::operator>(const Fixed &r)
{
	return ( this->getRawBits() > r.getRawBits() ? true : false );
}

bool			Fixed::operator>=(const Fixed &r)
{
	return ( this->getRawBits() >= r.getRawBits() ? true : false );
}

bool			Fixed::operator<(const Fixed &r)
{
	return ( this->getRawBits() < r.getRawBits() ? true : false );
}

bool			Fixed::operator<=(const Fixed &r)
{
	return ( this->getRawBits() <= r.getRawBits() ? true : false );
}


/*
______                 _   _
|  ____|              | | (_)
| |__ _   _ _ __   ___| |_ _  ___  _ __  ___
|  __| | | | '_ \ / __| __| |/ _ \| '_ \/ __|
| |  | |_| | | | | (__| |_| | (_) | | | \__ \
|_|   \__,_|_| |_|\___|\__|_|\___/|_| |_|___/
*/

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

Fixed	Fixed::min(Fixed &f, Fixed &s)
{
	if (f.getRawBits() < s.getRawBits())
		return (f);
	return (s);
}

Fixed	Fixed::min(const Fixed &f, const Fixed &s)
{
	if (f.getRawBits() < s.getRawBits())
		return (f);
	return (s);
}

Fixed	Fixed::max(Fixed &f, Fixed &s)
{
	if (f.getRawBits() > s.getRawBits())
		return (f);
	return (s);
}

Fixed	Fixed::max(const Fixed &f, const Fixed &s)
{
	if (f.getRawBits() > s.getRawBits())
		return (f);
	return (s);
}
