#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>

# include "Animal.hpp"

class Cat : public Animal
{

	public:

		Cat();
		Cat( Cat const & src );
		virtual ~Cat();

		Cat &		operator=( Cat const & rhs );

		virtual void		makeSound(void) const;

	private:

};

std::ostream &			operator<<( std::ostream & o, Cat const & i );

#endif