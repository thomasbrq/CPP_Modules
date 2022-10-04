#ifndef SERIALISATION_HPP
# define SERIALISATION_HPP

# include <iostream>
# include <string>

# include "Data.hpp"

class Serialisation
{

	public:
		Serialisation();
		Serialisation( Serialisation const & src );
		~Serialisation();

		uintptr_t	serialize(Data * ptr);
		Data *		deserialize(uintptr_t raw);

		Serialisation &		operator=( Serialisation const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, Serialisation const & i );

#endif /* *************************************************** SERIALISATION_H */