#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template< typename T >
void	iter(T * array, size_t size, void (*func)(T const &))
{
	for (size_t i = 0; i < size; i++)
		func(array[i]);
}

#endif /* ******************************************************** WHATEVER_H */