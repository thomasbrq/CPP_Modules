/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 10:12:47 by tbraquem          #+#    #+#             */
/*   Updated: 2022/08/03 11:27:10 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed {

public:
	Fixed(void);
	Fixed(const Fixed &f);
	Fixed(const int n); // Convert int value to fixed float.
	Fixed(const float n); // Convert float value to fixed float.
	~Fixed(void);

	Fixed			&operator=(const Fixed &f);

	Fixed			&operator+(const Fixed &f);
	Fixed			&operator-(const Fixed &f);
	Fixed			&operator*(const Fixed &f);
	Fixed			&operator/(const Fixed &f);

	Fixed			&operator++(); // Prefix
	Fixed			operator++(int); // Postfix
	Fixed			&operator--(); // Prefix
	Fixed			operator--(int); // Postfix

	bool			operator==(const Fixed &r);
	bool			operator!=(const Fixed &r);

	bool			operator>(const Fixed &r);
	bool			operator>=(const Fixed &r);

	bool			operator<(const Fixed &r);
	bool			operator<=(const Fixed &r);

	int				getRawBits(void) const;
	void			setRawBits(const int raw);

	float			toFloat(void) const;
	int				toInt(void) const;

	static Fixed	min(Fixed &f, Fixed &s);
	static Fixed	min(const Fixed &f, const Fixed &s);

	static Fixed	max(Fixed &f, Fixed &s);
	static Fixed	max(const Fixed &f, const Fixed &s);

private:
	int			_fixed_float;
	const int	_bits;

};

std::ostream	&operator<<(std::ostream &os, const Fixed &f);

#endif
