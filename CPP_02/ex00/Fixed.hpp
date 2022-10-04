/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 10:12:47 by tbraquem          #+#    #+#             */
/*   Updated: 2022/07/29 11:41:09 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed {

public:
	Fixed(void);
	Fixed(const Fixed &f);
	Fixed&operator=(const Fixed &f);
	~Fixed(void);

	int		getRawBits(void) const;
	void	setRawBits(const int raw);

private:
	int			_fixed_float;
	const int	_bits;

};

#endif
