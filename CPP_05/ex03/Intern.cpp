#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
	this->forms[0] = new PresidentialPardonForm();
	this->forms[1] = new RobotomyRequestForm();
	this->forms[2] = new ShrubberyCreationForm();
}

Intern::Intern( const Intern & src )
{
	(void) src;
	this->forms[0] = new PresidentialPardonForm();
	this->forms[1] = new RobotomyRequestForm();
	this->forms[2] = new ShrubberyCreationForm();
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
	delete this->forms[0];
	delete this->forms[1];
	delete this->forms[2];
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	(void) rhs;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Intern const & i )
{
	(void) i;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

Form * Intern::makeForm(std::string form_name, std::string target)
{
	(void) target;
	std::string	forms_array[] = {"presidential pardon", "robotomy request", "shrubbery creation"};

	for (int i = 0; i < 3; i++)
	{
		if (forms_array[i] == form_name)
		{
			std::cout << "Intern create " << form_name << std::endl;
			return (forms[i]->recreate(target));
		}
	}
	throw FormDoesntExistException();
}

const char *Intern::FormDoesntExistException::what() const throw()
{
	return ("Form doesn't exist");
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */