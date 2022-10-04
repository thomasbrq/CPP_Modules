/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 10:12:47 by tbraquem          #+#    #+#             */
/*   Updated: 2022/08/03 11:14:45 by tbraquem         ###   ########.fr       */
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
	Fixed(const int n);
	Fixed(const float n);

	Fixed			&operator=(const Fixed &f);
	~Fixed(void);

	int		getRawBits(void) const;
	void	setRawBits(const int raw);

	float	toFloat(void) const;
	int		toInt(void) const;

private:
	int			_fixed_float;
	const int	_bits;

};

std::ostream	&operator<<(std::ostream &os, const Fixed &f);

#endif
