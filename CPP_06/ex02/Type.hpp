#ifndef TYPE_HPP
# define TYPE_HPP

# include <iostream>
# include <string>

# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

class Type
{

	public:
		Type();
		Type( Type const & src );
		~Type();

		Base	*	generate(void);
		void		identify(Base * p);
		void		identify(Base & p);

		Type &		operator=( Type const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, Type const & i );

#endif /* ************************************************************ TYPE_H */