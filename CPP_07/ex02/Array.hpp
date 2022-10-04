#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <stdlib.h>

template< typename T >
class Array
{
	public:
		Array< T >() : _size(0) {
			this->_array = new T [0];
		};
		
		Array< T >(unsigned int n) : _size(n - 1) {
			this->_array = new T [n];
		};

		Array< T >( Array const & src ) {
			unsigned int	size = src.size();
			
			this->_size = size - 1;
			this->_array = new T [size];

			for (size_t i = 0; i < size; i++)
			{
				this->_array[i] = src[i];
			}
		};
		
		~Array< T >() {
			delete [] this->_array;
		};

		Array< T > &		operator=( Array< T > const & rhs ) {
			for (size_t i = 0; i < this->size(); i++)
			{
				this->_array[i] = rhs[i];
			}
			return (*this);
		};

		T &		operator[](unsigned int index) const {
			if (index > this->_size)
				throw BadIndexException();
			return (this->_array[index]);
		};

		unsigned int size(void) const {
			return (this->_size);
		};

		class BadIndexException : public std::exception 
		{
			const char * what () const throw () { return "Bad index"; }
		};

	private:
		T * 				_array;
		unsigned int		_size;
};

#endif /* *********************************************************** ARRAY_H */