#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <cctype>
# include <float.h>
# include <limits>

class Convert
{

	public:

		Convert();
		Convert(std::string string_number);
		Convert( Convert const & src );
		~Convert();

		std::string	findType(void);

		const char	*	getNumber(void) const;

		void		print();
		void		print(char n);
		void		print(int n);
		void		print(float n);
		void		print(double n);

		Convert &		operator=( Convert const & rhs );


	private:
		std::string	number;
		int			float_flag;

};

#endif /* ********************************************************* CONVERT_H */