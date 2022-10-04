#include "easyfind.hpp"

int	main(void)
{
	std::list<int>	array;

	array.push_back(42);
	array.push_back(3);
	array.push_back(5);

	std::cout << std::endl;
	std::cout << "\e[32mArray: [42, 3, 5]\e[0m" << std::endl;
	std::cout << std::endl;
	try
	{
		std::cout << "Searching '42'.." << std::endl;
		::easyfind(array, 42);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		std::cout << "Searching '3'.." << std::endl;
		::easyfind(array, 3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		std::cout << "Searching '5'.." << std::endl;
		::easyfind(array, 5);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		std::cout << "Searching '0'.." << std::endl;
		::easyfind(array, 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		std::cout << "Searching '-50'.." << std::endl;
		::easyfind(array, -50);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		std::cout << "Searching '180'.." << std::endl;
		::easyfind(array, 180);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}