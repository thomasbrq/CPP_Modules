#include "Type.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Type::Type()
{
}

Type::Type( const Type & src )
{
	(void) src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Type::~Type()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Type &				Type::operator=( Type const & rhs )
{
	(void) rhs;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Type const & i )
{
	(void) i;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

Base	*	Type::generate(void)
{
	Base * ret = NULL;

	srand (time(NULL));

	switch (rand() % 3 + 1)
	{
		case 1:
			std::cout << "Generating A..." << std::endl;
			ret = new A();
			break;
		case 2:
			std::cout << "Generating B..." << std::endl;
			ret = new B();
			break;
		case 3:
			std::cout << "Generating C..." << std::endl;
			ret = new C();
			break;
		default:
			std::cout << "Error generator!" << std::endl;
			break;
	}

	return (ret);
}

void		Type::identify(Base * p)
{
	A *	a_class = dynamic_cast<A *>(p);
	B *	b_class = dynamic_cast<B *>(p);
	C *	c_class = dynamic_cast<C *>(p);

	if (a_class != NULL)
		std::cout << "Identify: Class Type A" << std::endl;
	else if (b_class != NULL)
		std::cout << "Identify: Class Type B" << std::endl;
	else if (c_class != NULL)
		std::cout << "Identify: Class Type C" << std::endl;
}

void		Type::identify(Base & p)
{
	try
	{
		A	&a_class = dynamic_cast<A&>(p);
		std::cout << "Identify2: Class Type A" << std::endl;
		(void) a_class;
	}
	catch(std::exception &e) {}

	try
	{
		B	&b_class = dynamic_cast<B&>(p);
		std::cout << "Identify2: Class Type B" << std::endl;
		(void) b_class; 
	}
	catch(std::exception &e) {}

	try
	{
		C	&c_class = dynamic_cast<C&>(p);
		std::cout << "Identify2: Class Type C" << std::endl;
		(void) c_class;
	}
	catch(std::exception &e) {}
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */