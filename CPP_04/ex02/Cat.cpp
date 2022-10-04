#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
{
	std::cout << "Cat constructor called!" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat( const Cat & src )
{
	std::cout << "Cat copy called!" << std::endl;
	this->brain = new Brain(*src.brain);
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destructor called!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
{
	if (this->brain)
		delete this->brain;
	this->brain = new Brain(*rhs.brain);
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