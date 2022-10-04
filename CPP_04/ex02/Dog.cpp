#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
{
	std::cout << "Dog constructor called!" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog( const Dog & src )
{
	std::cout << "Dog copy called!" << std::endl;
	this->brain = new Brain(*src.brain);
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destructor called!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	if (this->brain)
		delete this->brain;
	this->brain = new Brain(*rhs.brain);
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Dog const & i )
{
	(void) i;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void		Dog::makeSound(void) const
{
	std::cout << "Wouf!" << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */