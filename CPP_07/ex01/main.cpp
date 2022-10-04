#include "iter.hpp"

template< typename T >
void	test_print(T const & a)
{
	std::cout << a << std::endl;
}

int	main(void)
{
	{
		std::cout << "Printing int array [1, 42, 66, 12, 1]" << std::endl;
		int	array[5] = {1, 42, 66, 12, 1};
		::iter(array, 5, &test_print);
		std::cout << std::endl;
	}

	{
		std::cout << "Printing string array ['Salut', 'à', 'tous', 'les', 'amis']" << std::endl;
		std::string array[5] = {"Salut", "à", "tous", "les", "amis"};	
		::iter(array, 5, &test_print);
		std::cout << std::endl;
	}

	return (0);
}