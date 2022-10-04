#include "Form.hpp"

int main(void)
{
	{
		Bureaucrat	a("Meu", 20);
		Form		form("Test", 1, 5);

		a.signForm(form);
	}
	std::cout << std::endl;
	{
		Bureaucrat	a("Meu", 1);
		Form		form("Test", 20, 5);

		a.signForm(form);
	}
	return (0);	
}