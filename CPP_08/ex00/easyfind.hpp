#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <list>
#include <algorithm>

class	OccurenceNotFoundException : public std::exception {
	const char * what() const throw() { return "Occurence not found"; };
};

template< typename T >
void	easyfind(T & container, int n)
{
	typename T::iterator	it;
	
	it = find(container.begin(), container.end(), n);

	if (*it == n)
		std::cout << "Found: " << n << std::endl;
	else
		throw OccurenceNotFoundException();
}

#endif