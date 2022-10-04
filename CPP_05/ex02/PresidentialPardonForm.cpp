#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm() : Form("default", 25, 5)
{
	std::cout << "default presidential pardon form" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5)
{
	std::cout << "targeted presidential pardon form" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const Form & src ) : Form(src)
{
	std::cout << "copy presidential pardon form" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "delete presidential pardon form instance" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/*
** --------------------------------- METHODS ----------------------------------
*/

void	PresidentialPardonForm::beExecuted() const
{
	std::cout << "presidential pardon form execution, please wait..." << std::endl;

	std::cout << this->getName() << " has been forgiven by Zaphod Beeblebrox." << std::endl;

	std::cout << "presidential pardon form execution done!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */