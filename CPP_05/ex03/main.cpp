#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include "Intern.hpp"

int main(void)
{
	{
		Intern	a;
		Form	*rrf = NULL;

		std::cout << std::endl;

		try
		{
			rrf = a.makeForm("robotomy request", "Brissboss");
			std::cout << std::endl;
			delete rrf;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << "\e[0m" << std::endl;
	{
		Intern	a;
		Form	*rrf = NULL;

		std::cout << std::endl;

		try
		{
			rrf = a.makeForm("presidential pardon", "Meu");
			std::cout << std::endl;
			delete rrf;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;

		{
		Intern	a;
		Form	*rrf = NULL;

		std::cout << std::endl;

		try
		{
			rrf = a.makeForm("shrubbery creation", "Leandre");
			std::cout << std::endl;
			delete rrf;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;

	return (0);	
}