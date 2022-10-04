#ifndef MUTANSTACK_HPP
# define MUTANSTACK_HPP

#include <stack>
#include <iostream>
#include <list>
#include <deque>

template< typename T >
class MutantStack : public std::stack< T >
{
	public:
		MutantStack() {};
		~MutantStack() {};
		MutantStack(const MutantStack &stack)
		{
			*this = stack;
		}

		typedef typename std::deque< T >::iterator iterator;
		
		iterator	begin()
		{
			return this->c.begin();
		}

		iterator	end()
		{
			return this->c.end();
		}
		
	private:
		
};

#endif