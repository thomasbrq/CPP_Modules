#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span() : _max_size(0)
{
}

Span::Span(unsigned int n) : _max_size(n)
{
}

Span::Span( const Span & src )
{
	this->_span_list = src._span_list;
	this->_max_size = src._max_size;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	this->_span_list = rhs._span_list;
	this->_max_size = rhs._max_size;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Span const & i )
{
	std::list< int >	list = i.getList();

	std::list< int >::iterator	it;
	std::list< int >::iterator	ite = list.end();
	
	for (it = list.begin(); it != ite; it++)
	{
		o << *it << std::endl;
	}

	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Span::addNumber(int number)
{
	unsigned int	list_size = this->_span_list.size();

	if (list_size >= _max_size)
		throw ListIsFullException();
	
	this->_span_list.push_back(number);
}

void	Span::addNumberRange(std::list<int>::iterator it, std::list<int>::iterator ite)
{
	while ( it != ite )
	{
		this->addNumber(*it);
		it++;
	}
}

int		Span::shortestSpan(void)
{
	std::list< int >::const_iterator	it;
	std::list< int >::const_iterator	it_previous;
	
	int shortest;

	if (this->_span_list.size() == 0)
		throw DistanceNotFoundException();

	this->_span_list.sort();

	it_previous = this->_span_list.begin();
	if (it != this->_span_list.end())
		it = ++(this->_span_list.begin());

	shortest = this->invert( (*it - *it_previous) );

	while ( it != this->_span_list.end() )
	{
		if ( this->invert( (*it - *it_previous) ) < shortest )
			shortest = this->invert( (*it - *it_previous) );
		it_previous = it;
		it++;
	}

	return (shortest);
}

int		Span::longestSpan(void) const
{
	std::list< int >::const_iterator	it;
	std::list< int >::const_iterator	it_previous;

	if (this->_span_list.size() == 0)
		throw DistanceNotFoundException();

	int min = *std::min_element(this->_span_list.begin(), this->_span_list.end());
	int max = *std::max_element(this->_span_list.begin(), this->_span_list.end());
	
	return ( this->invert( max - min ) );
}

int		Span::invert(int const n) const
{
	int	ret = n;

	if (n < 0)
		ret *= n;
	
	return (ret);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

unsigned int		Span::getMaxSize(void) const
{
	return (this->_max_size);
}

std::list< int >	Span::getList(void) const
{
	return (this->_span_list);
}

/* ************************************************************************** */