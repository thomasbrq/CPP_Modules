#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>

# include "Animal.hpp"

class Dog : public Animal
{

	public:

		Dog();
		Dog( Dog const & src );
		virtual ~Dog();

		Dog &		operator=( Dog const & rhs );

		virtual void		makeSound(void) const;

	private:

};

std::ostream &			operator<<( std::ostream & o, Dog const & i );

#endif