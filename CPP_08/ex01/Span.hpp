#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <list>

class Span
{

	public:
		Span();
		Span(unsigned int n);
		Span( Span const & src );
		~Span();

		void	addNumber(int number);
		void	addNumberRange(std::list<int>::iterator it, std::list<int>::iterator ite);

		int		shortestSpan(void);
		int		longestSpan(void) const;

		unsigned int		getMaxSize(void) const;
		std::list< int >	getList(void) const;

		Span &		operator=( Span const & rhs );

		class	ListIsFullException : public std::exception
		{
			const char * what() const throw() { return ("List is full"); };
		};

		class	DistanceNotFoundException : public std::exception
		{
			const char * what() const throw() { return ("Distance not found"); };
		};


	private:
		std::list< int >	_span_list;
		unsigned int		_max_size;

		int		invert(int const n) const;
};

std::ostream &			operator<<( std::ostream & o, Span const & i );

#endif /* ************************************************************ SPAN_H */