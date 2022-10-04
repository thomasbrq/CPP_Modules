#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm() : Form("default", 72, 45)
{
	std::cout << "default robotomy" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45)
{
	std::cout << "targeted robotomy" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const Form & src ) : Form(src)
{
	std::cout << "copy robotomy" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "delete robotomy instance" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/*
** --------------------------------- METHODS ----------------------------------
*/

void	RobotomyRequestForm::beExecuted() const
{
	std::cout << "robotomy execution, please wait..." << std::endl;

	std::cout << "Bzzzzzzzzz (* drilling noise *)" << std::endl;

	srand (time(NULL));
	int random_number = rand() % 100;

	if (random_number < 50)
		std::cout << this->getName() << " has been robotomized!" << std::endl;
	else
		std::cout << this->getName() << " robotomy operation failed!" << std::endl;

	std::cout << "robotomy execution done!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */