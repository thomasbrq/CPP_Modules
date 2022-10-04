#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat()
{
	std::cout << "WrongCat constructor called!" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat & src )
{
	(void) src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat &				WrongCat::operator=( WrongCat const & rhs )
{
	(void) rhs;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, WrongCat const & i )
{
	(void) i;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void		WrongCat::makeSound(void) const
{
	std::cout << "Mew :3" << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */