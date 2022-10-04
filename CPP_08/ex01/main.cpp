#include "Span.hpp"

int	main(void)
{
	Span	sp = Span(5);

	std::list< int >	myList;

	myList.push_back(6);
	myList.push_back(3);
	myList.push_back(17);
	myList.push_back(9);
	myList.push_back(11);

	std::cout << "List before add number range: " << std::endl;
	std::cout << sp << std::endl;
	sp.addNumberRange(myList.begin(), myList.end());
	std::cout << "List after add number range" << std::endl;
	std::cout << sp << std::endl;

	std::cout << "List of 5 numbers - (6, 3, 17, 9, 11)" << std::endl;
	try
	{
		std::cout << "Shortest span : ";
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "Longest span : ";
		std::cout << sp.longestSpan() << std::endl << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "0 numbers" << std::endl;
	Span	sp1 = Span(0);

	try
	{
		std::cout << "Shortest span : ";
		std::cout << sp1.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "Longest span : ";
		std::cout << sp1.longestSpan() << std::endl << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;

	std::cout << "100 numbers" << std::endl;
	Span	sp2 = Span(100);

	std::srand(std::time(nullptr));
	for (size_t i = 0; i < 100; i++)
		sp2.addNumber(rand() % 10000 + 1);

	try
	{
		std::cout << "Shortest span : ";
		std::cout << sp2.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "Longest span : ";
		std::cout << sp2.longestSpan() << std::endl << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;

	std::cout << "10.000 numbers - Int max" << std::endl;
	Span	sp3 = Span(10000);

	std::srand(std::time(nullptr));
	for (size_t i = 0; i < 10000; i++)
	{
		sp3.addNumber(rand() % INT_MAX);
	}

	try
	{
		std::cout << "Shortest span : ";
		std::cout << sp3.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "Longest span : ";
		std::cout << sp3.longestSpan() << std::endl << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	std::cout << std::endl;

	std::cout << "0 numbers: Array overflow" << std::endl << std::endl;
	Span	sp4 = Span(0);

	std::srand(std::time(nullptr));
	for (size_t i = 0; i < 10; i++)
	{
		try
		{
			sp4.addNumber(rand() % 10000 + 1);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	try
	{
		std::cout << "Shortest span : ";
		std::cout << sp4.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "Longest span : ";
		std::cout << sp4.longestSpan() << std::endl << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}