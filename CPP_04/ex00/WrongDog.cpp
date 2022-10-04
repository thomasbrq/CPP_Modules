#include "WrongDog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongDog::WrongDog()
{
	std::cout << "WrongDog constructor called!" << std::endl;
	this->type = "WrongDog";
}

WrongDog::WrongDog( const WrongDog & src )
{
	(void) src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongDog::~WrongDog()
{
	std::cout << "WrongDog destructor called!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongDog &				WrongDog::operator=( WrongDog const & rhs )
{
	(void) rhs;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, WrongDog const & i )
{
	(void) i;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void		WrongDog::makeSound(void) const
{
	std::cout << "Wouf!" << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */