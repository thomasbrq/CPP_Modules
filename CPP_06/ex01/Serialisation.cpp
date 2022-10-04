#include "Serialisation.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Serialisation::Serialisation()
{
}

Serialisation::Serialisation( const Serialisation & src )
{
	(void) src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Serialisation::~Serialisation()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Serialisation &				Serialisation::operator=( Serialisation const & rhs )
{
	(void) rhs;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Serialisation const & i )
{
	(void) i;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

uintptr_t	Serialisation::serialize(Data * ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *		Serialisation::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */