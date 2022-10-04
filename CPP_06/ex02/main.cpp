#include "Type.hpp"

int	main(void)
{
	Type	a;
	
	Base * test = a.generate();

	std::cout << std::endl;
	{
		std::cout << "Identify (*p):" << std::endl;
		a.identify(test);
	}
	std::cout << std::endl;
	{
		std::cout << "Identify (&p):" << std::endl;
		a.identify(*test);
	}
	std::cout << std::endl;

	delete test;
	return (0);
}