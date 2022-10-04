#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	{
		Bureaucrat	a("Meu", 6);
		Form		*c = new PresidentialPardonForm("Brissboss");

		std::cout << *c << std::endl;
		a.signForm(*c);
		a.executeForm(*c);
		delete c;
	}
	std::cout << std::endl;
	{
		Bureaucrat	a("Meu", 1);
		Form		*c = new PresidentialPardonForm("Brissboss");

		std::cout << *c << std::endl;
		a.signForm(*c);
		a.executeForm(*c);
		delete c;
	}
	std::cout << std::endl;
	{
		Bureaucrat	a("Meu", 1);
		Form		*c = new RobotomyRequestForm("Brissboss");

		std::cout << *c << std::endl;
		a.signForm(*c);
		a.executeForm(*c);
		delete c;
	}
	std::cout << std::endl;
	{
		Bureaucrat	a("Meu", 1);
		Form		*c = new ShrubberyCreationForm("Brissboss");

		std::cout << *c << std::endl;
		a.signForm(*c);
		a.executeForm(*c);
		delete c;
	}
	return (0);	
}