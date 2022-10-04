/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 10:12:35 by tbraquem          #+#    #+#             */
/*   Updated: 2022/08/03 11:26:12 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	{
		std::cout << "\033[1m\033[32m< Subject testing functions >\033[0m" << std::endl;
		Fixed		a;
		Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;

		std::cout << b << std::endl;

		std::cout << Fixed::max( a, b ) << std::endl;
		std::cout << std::endl;
	}

	{
		std::cout << "\033[1m\033[35m< '=' operator testing>\033[0m" << std::endl;

		Fixed	a(2);
		Fixed	b(5);

		std::cout << "a: " << "\033[1m\033[36m" << a << "\033[0m" << std::endl;
		std::cout << "b: " << "\033[1m\033[33m" << b << "\033[0m" << std::endl;
		a = b;
		std::cout << "(a = b), a: " << "\033[1m\033[31m" << a << "\033[0m" << std::endl << std::endl;

		Fixed	c(88.8f);
		Fixed	d(4.2f);

		std::cout << "c: " << "\033[1m\033[36m" << c << "\033[0m" << std::endl;
		std::cout << "d: " << "\033[1m\033[33m" << d << "\033[0m" << std::endl;
		c = d;
		std::cout << "(c = d), c: " << "\033[1m\033[31m" << c << "\033[0m" << std::endl << std::endl;

		Fixed	e(66.3333f);
		Fixed	f(3);

		std::cout << "e: " << "\033[1m\033[36m" << e << "\033[0m" << std::endl;
		std::cout << "f: " << "\033[1m\033[33m" << f << "\033[0m" << std::endl;
		e = f;
		std::cout << "(e = f), e: " << "\033[1m\033[31m" << e << "\033[0m" << std::endl << std::endl;

		Fixed	g(6);
		Fixed	h(-3);

		std::cout << "g: " << "\033[1m\033[36m" << g << "\033[0m" << std::endl;
		std::cout << "h: " << "\033[1m\033[33m" << h << "\033[0m" << std::endl;
		g = h;
		std::cout << "(g = h), g: " << "\033[1m\033[31m" << g << "\033[0m" << std::endl << std::endl;
	}

	{
		std::cout << "\033[1m\033[35m< '+' operator testing>\033[0m" << std::endl;

		Fixed	a(5);
		Fixed	b(3);

		std::cout << "a: " << "\033[1m\033[36m" << a << "\033[0m" << std::endl;
		std::cout << "b: " << "\033[1m\033[33m" << b << "\033[0m" << std::endl;
		std::cout << "(a + b): " << "\033[1m\033[31m" << a + b << "\033[0m" << std::endl << std::endl;

		Fixed	c(5.55f);
		Fixed	d(3.21f);

		std::cout << "c: " << "\033[1m\033[36m" << c << "\033[0m" << std::endl;
		std::cout << "d: " << "\033[1m\033[33m" << d << "\033[0m" << std::endl;
		std::cout << "(c + d): " << "\033[1m\033[31m" << c + d << "\033[0m" << std::endl << std::endl;

		Fixed	e(42.42f);
		Fixed	f(2);

		std::cout << "e: " << "\033[1m\033[36m" << e << "\033[0m" << std::endl;
		std::cout << "f: " << "\033[1m\033[33m" << f << "\033[0m" << std::endl;
		std::cout << "(e + f): " << "\033[1m\033[31m" << e + f << "\033[0m" << std::endl << std::endl;

		Fixed	g(-6);
		Fixed	h(1);

		std::cout << "g: " << "\033[1m\033[36m" << g << "\033[0m" << std::endl;
		std::cout << "h: " << "\033[1m\033[33m" << h << "\033[0m" << std::endl;
		std::cout << "(g + h): " << "\033[1m\033[31m" << g + h << "\033[0m" << std::endl << std::endl;
	}

	{
		std::cout << "\033[1m\033[35m< '*' operator testing>\033[0m" << std::endl;

		Fixed	a(42.15f);
		Fixed	b(2);

		std::cout << "a: " << "\033[1m\033[36m" << a << "\033[0m" << std::endl;
		std::cout << "b: " << "\033[1m\033[33m" << b << "\033[0m" << std::endl;
		std::cout << "(a * b): " << "\033[1m\033[31m" << a * b << "\033[0m" << std::endl << std::endl;

		Fixed	c(5.45f);
		Fixed	d(1.21f);

		std::cout << "c: " << "\033[1m\033[36m" << c << "\033[0m" << std::endl;
		std::cout << "d: " << "\033[1m\033[33m" << d << "\033[0m" << std::endl;
		std::cout << "(c * d): " << "\033[1m\033[31m" << c * d << "\033[0m" << std::endl << std::endl;

		Fixed	e(0.12f);
		Fixed	f(2.24f);

		std::cout << "e: " << "\033[1m\033[36m" << e << "\033[0m" << std::endl;
		std::cout << "f: " << "\033[1m\033[33m" << f << "\033[0m" << std::endl;
		std::cout << "(e * f): " << "\033[1m\033[31m" << e * f << "\033[0m" << std::endl << std::endl;

		Fixed	g(-6);
		Fixed	h(2);

		std::cout << "g: " << "\033[1m\033[36m" << g << "\033[0m" << std::endl;
		std::cout << "h: " << "\033[1m\033[33m" << h << "\033[0m" << std::endl;
		std::cout << "(g * h): " << "\033[1m\033[31m" << g * h << "\033[0m" << std::endl << std::endl;
	}

	{
		std::cout << "\033[1m\033[35m< '-' operator testing>\033[0m" << std::endl;

		Fixed	a(24.5f);
		Fixed	b(24);

		std::cout << "a: " << "\033[1m\033[36m" << a << "\033[0m" << std::endl;
		std::cout << "b: " << "\033[1m\033[33m" << b << "\033[0m" << std::endl;
		std::cout << "(a - b): " << "\033[1m\033[31m" << a - b << "\033[0m" << std::endl << std::endl;

		Fixed	c(42);
		Fixed	d(21);

		std::cout << "c: " << "\033[1m\033[36m" << c << "\033[0m" << std::endl;
		std::cout << "d: " << "\033[1m\033[33m" << d << "\033[0m" << std::endl;
		std::cout << "(c - d): " << "\033[1m\033[31m" << c - d << "\033[0m" << std::endl << std::endl;

		Fixed	e(42.56f);
		Fixed	f(42.56f);

		std::cout << "e: " << "\033[1m\033[36m" << e << "\033[0m" << std::endl;
		std::cout << "f: " << "\033[1m\033[33m" << f << "\033[0m" << std::endl;
		std::cout << "(e - f): " << "\033[1m\033[31m" << e - f << "\033[0m" << std::endl << std::endl;

		Fixed	g(-6);
		Fixed	h(-5);

		std::cout << "g: " << "\033[1m\033[36m" << g << "\033[0m" << std::endl;
		std::cout << "h: " << "\033[1m\033[33m" << h << "\033[0m" << std::endl;
		std::cout << "(g - h): " << "\033[1m\033[31m" << (g - h) << "\033[0m" << std::endl << std::endl;
	}

	{
		std::cout << "\033[1m\033[35m< '/' operator testing>\033[0m" << std::endl;

		Fixed	a(28);
		Fixed	b(4);

		std::cout << "a: " << "\033[1m\033[36m" << a << "\033[0m" << std::endl;
		std::cout << "b: " << "\033[1m\033[33m" << b << "\033[0m" << std::endl;
		std::cout << "(a / b): " << "\033[1m\033[31m" << a / b << "\033[0m" << std::endl << std::endl;

		Fixed	c(72.94f);
		Fixed	d(2);

		std::cout << "c: " << "\033[1m\033[36m" << c << "\033[0m" << std::endl;
		std::cout << "d: " << "\033[1m\033[33m" << d << "\033[0m" << std::endl;
		std::cout << "(c / d): " << "\033[1m\033[31m" << c / d << "\033[0m" << std::endl << std::endl;

		Fixed	e(18.4f);
		Fixed	f(2.55f);

		std::cout << "e: " << "\033[1m\033[36m" << e << "\033[0m" << std::endl;
		std::cout << "f: " << "\033[1m\033[33m" << f << "\033[0m" << std::endl;
		std::cout << "(e / f): " << "\033[1m\033[31m" << e / f << "\033[0m" << std::endl << std::endl;

		Fixed	g(-6);
		Fixed	h(2);

		std::cout << "g: " << "\033[1m\033[36m" << g << "\033[0m" << std::endl;
		std::cout << "h: " << "\033[1m\033[33m" << h << "\033[0m" << std::endl;
		std::cout << "(g / h): " << "\033[1m\033[31m" << g / h << "\033[0m" << std::endl << std::endl;
	}

	{
		std::cout << "\033[1m\033[35m< '--' operator testing>\033[0m" << std::endl;

		Fixed	a(21);

		std::cout << "a: " << "\033[1m\033[36m" << a << "\033[0m" << std::endl;
		std::cout << "--a: " << "\033[1m\033[31m" << --a << "\033[0m" << std::endl;
		std::cout << "a: " << "\033[1m\033[31m" << a << "\033[0m" << std::endl << std::endl;

		Fixed	b(42);

		std::cout << "b: " << "\033[1m\033[36m" << b << "\033[0m" << std::endl;
		std::cout << "b--: " << "\033[1m\033[31m" << b-- << "\033[0m" << std::endl;
		std::cout << "b: " << "\033[1m\033[31m" << b << "\033[0m" << std::endl << std::endl;
	}

	{
		std::cout << "\033[1m\033[35m< '==' operator testing>\033[0m" << std::endl;

		Fixed	a(24.0f);
		Fixed	b(24);

		std::cout << "a: " << "\033[1m\033[36m" << a << "\033[0m" << std::endl;
		std::cout << "b: " << "\033[1m\033[33m" << b << "\033[0m" << std::endl;
		std::cout << "(a == b): " << "\033[1m\033[31m" << (a == b) << "\033[0m" << std::endl << std::endl;

		Fixed	c(24);
		Fixed	d(24);

		std::cout << "c: " << "\033[1m\033[36m" << c << "\033[0m" << std::endl;
		std::cout << "d: " << "\033[1m\033[33m" << d << "\033[0m" << std::endl;
		std::cout << "(c == d): " << "\033[1m\033[31m" << (c == d) << "\033[0m" << std::endl << std::endl;

		Fixed	e(42.42f);
		Fixed	f(17.17f);

		std::cout << "e: " << "\033[1m\033[36m" << e << "\033[0m" << std::endl;
		std::cout << "f: " << "\033[1m\033[33m" << f << "\033[0m" << std::endl;
		std::cout << "(e == f): " << "\033[1m\033[31m" << (e == f) << "\033[0m" << std::endl << std::endl;

		Fixed	g(42.42f);
		Fixed	h(42.42f);

		std::cout << "g: " << "\033[1m\033[36m" << g << "\033[0m" << std::endl;
		std::cout << "h: " << "\033[1m\033[33m" << h << "\033[0m" << std::endl;
		std::cout << "(g == h): " << "\033[1m\033[31m" << (g == h) << "\033[0m" << std::endl << std::endl;
	}

	{
		std::cout << "\033[1m\033[35m< '!=' operator testing>\033[0m" << std::endl;

		Fixed	a(78);
		Fixed	b(24);

		std::cout << "a: " << "\033[1m\033[36m" << a << "\033[0m" << std::endl;
		std::cout << "b: " << "\033[1m\033[33m" << b << "\033[0m" << std::endl;
		std::cout << "(a != b): " << "\033[1m\033[31m" << (a != b) << "\033[0m" << std::endl << std::endl;

		Fixed	c(0);
		Fixed	d(14);

		std::cout << "c: " << "\033[1m\033[36m" << c << "\033[0m" << std::endl;
		std::cout << "d: " << "\033[1m\033[33m" << d << "\033[0m" << std::endl;
		std::cout << "(c != d): " << "\033[1m\033[31m" << (c != d) << "\033[0m" << std::endl << std::endl;

		Fixed	e(42.12f);
		Fixed	f(42.12f);

		std::cout << "e: " << "\033[1m\033[36m" << e << "\033[0m" << std::endl;
		std::cout << "f: " << "\033[1m\033[33m" << f << "\033[0m" << std::endl;
		std::cout << "(e != f): " << "\033[1m\033[31m" << (e != f) << "\033[0m" << std::endl << std::endl;

		Fixed	g(42.0f);
		Fixed	h(42);

		std::cout << "g: " << "\033[1m\033[36m" << g << "\033[0m" << std::endl;
		std::cout << "h: " << "\033[1m\033[33m" << h << "\033[0m" << std::endl;
		std::cout << "(g != h): " << "\033[1m\033[31m" << (g != h) << "\033[0m" << std::endl << std::endl;
	}

	{
		std::cout << "\033[1m\033[35m< '>' operator testing>\033[0m" << std::endl;

		Fixed	a(78);
		Fixed	b(24);

		std::cout << "a: " << "\033[1m\033[36m" << a << "\033[0m" << std::endl;
		std::cout << "b: " << "\033[1m\033[33m" << b << "\033[0m" << std::endl;
		std::cout << "(a > b): " << "\033[1m\033[31m" << (a > b) << "\033[0m" << std::endl << std::endl;

		Fixed	c(14.1f);
		Fixed	d(14);

		std::cout << "c: " << "\033[1m\033[36m" << c << "\033[0m" << std::endl;
		std::cout << "d: " << "\033[1m\033[33m" << d << "\033[0m" << std::endl;
		std::cout << "(c > d): " << "\033[1m\033[31m" << (c > d) << "\033[0m" << std::endl << std::endl;

		Fixed	e(42.4242f);
		Fixed	f(17.17f);

		std::cout << "e: " << "\033[1m\033[36m" << e << "\033[0m" << std::endl;
		std::cout << "f: " << "\033[1m\033[33m" << f << "\033[0m" << std::endl;
		std::cout << "(e > f): " << "\033[1m\033[31m" << (e > f) << "\033[0m" << std::endl << std::endl;

		Fixed	g(21.21f);
		Fixed	h(42.42f);

		std::cout << "g: " << "\033[1m\033[36m" << g << "\033[0m" << std::endl;
		std::cout << "h: " << "\033[1m\033[33m" << h << "\033[0m" << std::endl;
		std::cout << "(g > h): " << "\033[1m\033[31m" << (g > h) << "\033[0m" << std::endl << std::endl;

		Fixed	i(14);
		Fixed	j(14);

		std::cout << "i: " << "\033[1m\033[36m" << i << "\033[0m" << std::endl;
		std::cout << "j: " << "\033[1m\033[33m" << j << "\033[0m" << std::endl;
		std::cout << "(i > j): " << "\033[1m\033[31m" << (i > j) << "\033[0m" << std::endl << std::endl;
	}

	{
		std::cout << "\033[1m\033[35m< '>=' operator testing>\033[0m" << std::endl;

		Fixed	a(78);
		Fixed	b(24);

		std::cout << "a: " << "\033[1m\033[36m" << a << "\033[0m" << std::endl;
		std::cout << "b: " << "\033[1m\033[33m" << b << "\033[0m" << std::endl;
		std::cout << "(a >= b): " << "\033[1m\033[31m" << (a >= b) << "\033[0m" << std::endl << std::endl;

		Fixed	c(14.1f);
		Fixed	d(14.1f);

		std::cout << "c: " << "\033[1m\033[36m" << c << "\033[0m" << std::endl;
		std::cout << "d: " << "\033[1m\033[33m" << d << "\033[0m" << std::endl;
		std::cout << "(c >= d): " << "\033[1m\033[31m" << (c >= d) << "\033[0m" << std::endl << std::endl;

		Fixed	e(42.4242f);
		Fixed	f(42);

		std::cout << "e: " << "\033[1m\033[36m" << e << "\033[0m" << std::endl;
		std::cout << "f: " << "\033[1m\033[33m" << f << "\033[0m" << std::endl;
		std::cout << "(e >= f): " << "\033[1m\033[31m" << (e >= f) << "\033[0m" << std::endl << std::endl;

		Fixed	g(21);
		Fixed	h(21);

		std::cout << "g: " << "\033[1m\033[36m" << g << "\033[0m" << std::endl;
		std::cout << "h: " << "\033[1m\033[33m" << h << "\033[0m" << std::endl;
		std::cout << "(g >= h): " << "\033[1m\033[31m" << (g >= h) << "\033[0m" << std::endl << std::endl;

		Fixed	i(17.44f);
		Fixed	j(17.45f);

		std::cout << "i: " << "\033[1m\033[36m" << i << "\033[0m" << std::endl;
		std::cout << "j: " << "\033[1m\033[33m" << j << "\033[0m" << std::endl;
		std::cout << "(i >= j): " << "\033[1m\033[31m" << (i >= j) << "\033[0m" << std::endl << std::endl;
	}

	{
		std::cout << "\033[1m\033[35m< '<' operator testing>\033[0m" << std::endl;

		Fixed	a(78);
		Fixed	b(24);

		std::cout << "a: " << "\033[1m\033[36m" << a << "\033[0m" << std::endl;
		std::cout << "b: " << "\033[1m\033[33m" << b << "\033[0m" << std::endl;
		std::cout << "(a < b): " << "\033[1m\033[31m" << (a < b) << "\033[0m" << std::endl << std::endl;

		Fixed	c(14.1f);
		Fixed	d(14.1f);

		std::cout << "c: " << "\033[1m\033[36m" << c << "\033[0m" << std::endl;
		std::cout << "d: " << "\033[1m\033[33m" << d << "\033[0m" << std::endl;
		std::cout << "(c < d): " << "\033[1m\033[31m" << (c < d) << "\033[0m" << std::endl << std::endl;

		Fixed	e(42.4242f);
		Fixed	f(42);

		std::cout << "e: " << "\033[1m\033[36m" << e << "\033[0m" << std::endl;
		std::cout << "f: " << "\033[1m\033[33m" << f << "\033[0m" << std::endl;
		std::cout << "(e < f): " << "\033[1m\033[31m" << (e < f) << "\033[0m" << std::endl << std::endl;

		Fixed	g(21);
		Fixed	h(21);

		std::cout << "g: " << "\033[1m\033[36m" << g << "\033[0m" << std::endl;
		std::cout << "h: " << "\033[1m\033[33m" << h << "\033[0m" << std::endl;
		std::cout << "(g < h): " << "\033[1m\033[31m" << (g < h) << "\033[0m" << std::endl << std::endl;

		Fixed	i(17.44f);
		Fixed	j(17.45f);

		std::cout << "i: " << "\033[1m\033[36m" << i << "\033[0m" << std::endl;
		std::cout << "j: " << "\033[1m\033[33m" << j << "\033[0m" << std::endl;
		std::cout << "(i < j): " << "\033[1m\033[31m" << (i < j) << "\033[0m" << std::endl << std::endl;
	}

	{
		std::cout << "\033[1m\033[35m< '<=' operator testing>\033[0m" << std::endl;

		Fixed	a(78);
		Fixed	b(24);

		std::cout << "a: " << "\033[1m\033[36m" << a << "\033[0m" << std::endl;
		std::cout << "b: " << "\033[1m\033[33m" << b << "\033[0m" << std::endl;
		std::cout << "(a <= b): " << "\033[1m\033[31m" << (a <= b) << "\033[0m" << std::endl << std::endl;

		Fixed	c(14.1f);
		Fixed	d(14.1f);

		std::cout << "c: " << "\033[1m\033[36m" << c << "\033[0m" << std::endl;
		std::cout << "d: " << "\033[1m\033[33m" << d << "\033[0m" << std::endl;
		std::cout << "(c <= d): " << "\033[1m\033[31m" << (c <= d) << "\033[0m" << std::endl << std::endl;

		Fixed	e(42.4242f);
		Fixed	f(42);

		std::cout << "e: " << "\033[1m\033[36m" << e << "\033[0m" << std::endl;
		std::cout << "f: " << "\033[1m\033[33m" << f << "\033[0m" << std::endl;
		std::cout << "(e <= f): " << "\033[1m\033[31m" << (e <= f) << "\033[0m" << std::endl << std::endl;

		Fixed	g(21);
		Fixed	h(21);

		std::cout << "g: " << "\033[1m\033[36m" << g << "\033[0m" << std::endl;
		std::cout << "h: " << "\033[1m\033[33m" << h << "\033[0m" << std::endl;
		std::cout << "(g <= h): " << "\033[1m\033[31m" << (g <= h) << "\033[0m" << std::endl << std::endl;

		Fixed	i(17.44f);
		Fixed	j(17.45f);

		std::cout << "i: " << "\033[1m\033[36m" << i << "\033[0m" << std::endl;
		std::cout << "j: " << "\033[1m\033[33m" << j << "\033[0m" << std::endl;
		std::cout << "(i <= j): " << "\033[1m\033[31m" << (i <= j) << "\033[0m" << std::endl << std::endl;
	}

	{
		std::cout << "\033[1m\033[35m< 'max' function testing>\033[0m" << std::endl;

		Fixed	a(78);
		Fixed	b(24);

		std::cout << "a: " << "\033[1m\033[36m" << a << "\033[0m" << std::endl;
		std::cout << "b: " << "\033[1m\033[33m" << b << "\033[0m" << std::endl;
		std::cout << "max(a, b): " << "\033[1m\033[31m" << Fixed::max(a, b) << "\033[0m" << std::endl << std::endl;

		Fixed	c(14.1f);
		Fixed	d(14.1f);

		std::cout << "c: " << "\033[1m\033[36m" << c << "\033[0m" << std::endl;
		std::cout << "d: " << "\033[1m\033[33m" << d << "\033[0m" << std::endl;
		std::cout << "max(c, d): " << "\033[1m\033[31m" << Fixed::max(c, d) << "\033[0m" << std::endl << std::endl;

		Fixed	e(42.4242f);
		Fixed	f(42);

		std::cout << "e: " << "\033[1m\033[36m" << e << "\033[0m" << std::endl;
		std::cout << "f: " << "\033[1m\033[33m" << f << "\033[0m" << std::endl;
		std::cout << "max(e, f): " << "\033[1m\033[31m" << Fixed::max(e, f) << "\033[0m" << std::endl << std::endl;

		Fixed	g(21);
		Fixed	h(21);

		std::cout << "g: " << "\033[1m\033[36m" << g << "\033[0m" << std::endl;
		std::cout << "h: " << "\033[1m\033[33m" << h << "\033[0m" << std::endl;
		std::cout << "max(g, h): " << "\033[1m\033[31m" << Fixed::max(g, h) << "\033[0m" << std::endl << std::endl;

		Fixed	i(17.44f);
		Fixed	j(17.45f);

		std::cout << "i: " << "\033[1m\033[36m" << i << "\033[0m" << std::endl;
		std::cout << "j: " << "\033[1m\033[33m" << j << "\033[0m" << std::endl;
		std::cout << "max(i, j): " << "\033[1m\033[31m" << Fixed::max(i, j) << "\033[0m" << std::endl << std::endl;
	}

	{
		std::cout << "\033[1m\033[35m< 'min' function testing>\033[0m" << std::endl;

		Fixed	a(78);
		Fixed	b(24);

		std::cout << "a: " << "\033[1m\033[36m" << a << "\033[0m" << std::endl;
		std::cout << "b: " << "\033[1m\033[33m" << b << "\033[0m" << std::endl;
		std::cout << "min(a, b): " << "\033[1m\033[31m" << Fixed::min(a, b) << "\033[0m" << std::endl << std::endl;

		Fixed	c(14.1f);
		Fixed	d(14.1f);

		std::cout << "c: " << "\033[1m\033[36m" << c << "\033[0m" << std::endl;
		std::cout << "d: " << "\033[1m\033[33m" << d << "\033[0m" << std::endl;
		std::cout << "min(c, d): " << "\033[1m\033[31m" << Fixed::min(c, d) << "\033[0m" << std::endl << std::endl;

		Fixed	e(42.4242f);
		Fixed	f(42);

		std::cout << "e: " << "\033[1m\033[36m" << e << "\033[0m" << std::endl;
		std::cout << "f: " << "\033[1m\033[33m" << f << "\033[0m" << std::endl;
		std::cout << "min(e, f): " << "\033[1m\033[31m" << Fixed::min(e, f) << "\033[0m" << std::endl << std::endl;

		Fixed	g(21);
		Fixed	h(21);

		std::cout << "g: " << "\033[1m\033[36m" << g << "\033[0m" << std::endl;
		std::cout << "h: " << "\033[1m\033[33m" << h << "\033[0m" << std::endl;
		std::cout << "min(g, h): " << "\033[1m\033[31m" << Fixed::min(g, h) << "\033[0m" << std::endl << std::endl;

		Fixed	i(17.44f);
		Fixed	j(17.45f);

		std::cout << "i: " << "\033[1m\033[36m" << i << "\033[0m" << std::endl;
		std::cout << "j: " << "\033[1m\033[33m" << j << "\033[0m" << std::endl;
		std::cout << "min(i, j): " << "\033[1m\033[31m" << Fixed::min(i, j) << "\033[0m" << std::endl << std::endl;
	}

	{
		std::cout << "\033[1m\033[35m< 'const max' function testing>\033[0m" << std::endl;

		const Fixed	a(78);
		const Fixed	b(24);

		std::cout << "a: " << "\033[1m\033[36m" << a << "\033[0m" << std::endl;
		std::cout << "b: " << "\033[1m\033[33m" << b << "\033[0m" << std::endl;
		std::cout << "max(a, b): " << "\033[1m\033[31m" << Fixed::max(a, b) << "\033[0m" << std::endl << std::endl;

		const Fixed	c(14.1f);
		const Fixed	d(14.1f);

		std::cout << "c: " << "\033[1m\033[36m" << c << "\033[0m" << std::endl;
		std::cout << "d: " << "\033[1m\033[33m" << d << "\033[0m" << std::endl;
		std::cout << "max(c, d): " << "\033[1m\033[31m" << Fixed::max(c, d) << "\033[0m" << std::endl << std::endl;

		const Fixed	e(42.4242f);
		const Fixed	f(42);

		std::cout << "e: " << "\033[1m\033[36m" << e << "\033[0m" << std::endl;
		std::cout << "f: " << "\033[1m\033[33m" << f << "\033[0m" << std::endl;
		std::cout << "max(e, f): " << "\033[1m\033[31m" << Fixed::max(e, f) << "\033[0m" << std::endl << std::endl;

		const Fixed	g(21);
		const Fixed	h(21);

		std::cout << "g: " << "\033[1m\033[36m" << g << "\033[0m" << std::endl;
		std::cout << "h: " << "\033[1m\033[33m" << h << "\033[0m" << std::endl;
		std::cout << "max(g, h): " << "\033[1m\033[31m" << Fixed::max(g, h) << "\033[0m" << std::endl << std::endl;

		const Fixed	i(17.44f);
		const Fixed	j(17.45f);

		std::cout << "i: " << "\033[1m\033[36m" << i << "\033[0m" << std::endl;
		std::cout << "j: " << "\033[1m\033[33m" << j << "\033[0m" << std::endl;
		std::cout << "max(i, j): " << "\033[1m\033[31m" << Fixed::max(i, j) << "\033[0m" << std::endl << std::endl;
	}

	{
		std::cout << "\033[1m\033[35m< 'const min' function testing>\033[0m" << std::endl;

		const Fixed	a(78);
		const Fixed	b(24);

		std::cout << "a: " << "\033[1m\033[36m" << a << "\033[0m" << std::endl;
		std::cout << "b: " << "\033[1m\033[33m" << b << "\033[0m" << std::endl;
		std::cout << "min(a, b): " << "\033[1m\033[31m" << Fixed::min(a, b) << "\033[0m" << std::endl << std::endl;

		const Fixed	c(14.1f);
		const Fixed	d(14.1f);

		std::cout << "c: " << "\033[1m\033[36m" << c << "\033[0m" << std::endl;
		std::cout << "d: " << "\033[1m\033[33m" << d << "\033[0m" << std::endl;
		std::cout << "min(c, d): " << "\033[1m\033[31m" << Fixed::min(c, d) << "\033[0m" << std::endl << std::endl;

		const Fixed	e(42.4242f);
		const Fixed	f(42);

		std::cout << "e: " << "\033[1m\033[36m" << e << "\033[0m" << std::endl;
		std::cout << "f: " << "\033[1m\033[33m" << f << "\033[0m" << std::endl;
		std::cout << "min(e, f): " << "\033[1m\033[31m" << Fixed::min(e, f) << "\033[0m" << std::endl << std::endl;

		const Fixed	g(21);
		const Fixed	h(21);

		std::cout << "g: " << "\033[1m\033[36m" << g << "\033[0m" << std::endl;
		std::cout << "h: " << "\033[1m\033[33m" << h << "\033[0m" << std::endl;
		std::cout << "min(g, h): " << "\033[1m\033[31m" << Fixed::min(g, h) << "\033[0m" << std::endl << std::endl;

		const Fixed	i(17.44f);
		const Fixed	j(17.45f);

		std::cout << "i: " << "\033[1m\033[36m" << i << "\033[0m" << std::endl;
		std::cout << "j: " << "\033[1m\033[33m" << j << "\033[0m" << std::endl;
		std::cout << "min(i, j): " << "\033[1m\033[31m" << Fixed::min(i, j) << "\033[0m" << std::endl << std::endl;
	}

	return (0);
}
