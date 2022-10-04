#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm() : Form("default", 145, 137)
{
	std::cout << "default shrubbery" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137)
{
	std::cout << "targeted shrubbery" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const Form & src ) : Form(src)
{
	std::cout << "copy shrubbery" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "delete shrubbery instance" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/*
** --------------------------------- METHODS ----------------------------------
*/

void	ShrubberyCreationForm::beExecuted() const
{
	std::cout << "Shrubbery execution, please wait..." << std::endl;
	std::string	target = this->getName() + "_shrubbery";

	std::ofstream file(target.c_str());

	file << "     oxoxoo    ooxoo\n   ooxoxo oo  oxoxooo\n  oooo xxoxoo ooo ooox\n  oxo o oxoxo  xoxxoxo\n   oxo xooxoooo o ooo\n     ooo\\oo\\  /o/o\n         \\  \\/ /\n          |   /\n          |  |\n          | D|\n          |  |\n          |  |\n   ______/____\\____\n";

	file.close();

	std::cout << "Shrubbery execution done!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */