#include "Bureaucrat.hpp"

int main(void)
{
	{
		std::cout << "Grade: 1" << std::endl;
		try
		{
			Bureaucrat	a("Meu", 1);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try
		{
			std::cout << "Grade: 150" << std::endl;
			Bureaucrat	a("Meu", 150);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try
		{
			std::cout << "Grade: 50" << std::endl;
			Bureaucrat	a("Meu", 50);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try
		{
			std::cout << "Grade: -1" << std::endl;
			Bureaucrat	a("Meu", -1);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try
		{
			std::cout << "Grade: 155" << std::endl;
			Bureaucrat	a("Meu", 155);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try
		{
			std::cout << "Grade: 150, Increment" << std::endl;
			Bureaucrat	a("Meu", 150);
			std::cout << a << std::endl;
			a.incrementGrade();
			std::cout << a << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try
		{
			std::cout << "Grade: 1, Increment" << std::endl;
			Bureaucrat	a("Meu", 1);
			std::cout << a << std::endl;
			a.incrementGrade();
			std::cout << a << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try
		{
			std::cout << "Grade: 1, Decrement" << std::endl;
			Bureaucrat	a("Meu", 1);
			std::cout << a << std::endl;
			a.decrementGrade();
			std::cout << a << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try
		{
			std::cout << "Grade: 150, Decrement" << std::endl;
			Bureaucrat	a("Meu", 150);
			std::cout << a << std::endl;
			a.decrementGrade();
			std::cout << a << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	
	return (0);	
}