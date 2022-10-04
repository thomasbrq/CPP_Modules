#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
{
	std::cout << "Cat constructor called!" << std::endl;
	this->type = "Cat";
}

Cat::Cat( const Cat & src )
{
	(void) src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	std::cout << "Cat destructor called!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
{
	(void) rhs;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Cat const & i )
{
	(void) i;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void		Cat::makeSound(void) const
{
	std::cout << "Mew :3" << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */