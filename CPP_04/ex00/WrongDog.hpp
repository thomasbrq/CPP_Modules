#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP

# include <iostream>
# include <string>

# include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal
{

	public:

		WrongDog();
		WrongDog( WrongDog const & src );
		~WrongDog();

		WrongDog &		operator=( WrongDog const & rhs );

		void		makeSound(void) const;

	private:

};

std::ostream &			operator<<( std::ostream & o, WrongDog const & i );

#endif