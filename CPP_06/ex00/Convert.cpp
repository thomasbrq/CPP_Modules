#include "Convert.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Convert::Convert()
{
}

Convert::Convert( const Convert & src )
{
	this->number = src.getNumber();
	this->float_flag = src.float_flag;
}

Convert::Convert(std::string string_number) : number(string_number)
{
	this->float_flag = 0;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Convert::~Convert()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Convert &				Convert::operator=( Convert const & rhs )
{
	if ( this != &rhs )
	{
		this->number = rhs.getNumber();
		this->float_flag = rhs.float_flag;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string	Convert::findType(void)
{
	// Error handling for the find function.
	size_t	max = std::string::npos;

	// If minus detected in the number.
	int		minus = 0;

	if (this->number == "nan")
		return ("nan");

	if (this->number == "-inff" || this->number == "+inff" || this->number == "inff")
		return ("float");

	if (this->number == "-inf" || this->number == "+inf" || this->number == "inf")
		return ("double");

	if (this->number[0] == '-')
		minus = 1;

	// Checking type.
	if (this->number.find('f') != max && this->number.find('.') != max)
	{
		if (this->number.at(this->number.length() - 1) == 'f' && this->number.at(this->number.length() - 2) == '0')
			this->float_flag = 1;
		return ("float");
	}
	else if (this->number.find('.') != max)
	{
		if (this->number.at(this->number.length() - 1) == '0')
			this->float_flag = 1;
		return ("double");
	}
	else if ((this->number.length() > 0) && (this->number[0 + minus] >= '0' && this->number[0 + minus] <= '9'))
	{
		this->float_flag = 1;
		return ("int");
	}
	else if ((this->number[0 + minus] >= 33 && this->number[0 + minus] <= 126) && this->number.length() == 1)
	{
		this->float_flag = 1;
		return ("char");
	}
	return ("error");
}

const char	*	Convert::getNumber(void) const
{
	const char	*	ret = this->number.c_str();
	return (ret);
}

void		Convert::print(char n)
{
	int	flag = this->float_flag;

	std::cout << "char: " << n << std::endl;
	std::cout << "int: " << static_cast<int>(n) << std::endl;

	flag == 1 ? std::cout << "float: " << static_cast<float>(n) << ".0f" << std::endl : std::cout << "float: " << static_cast<float>(n) << "f" << std::endl;
	flag == 1 ? std::cout << "double: " << static_cast<double>(n) << ".0" << std::endl : std::cout << "double: " << static_cast<double>(n) << std::endl;
}

void		Convert::print(int n)
{
	int	flag = this->float_flag;
	int	printable = isprint(static_cast<char>(n));
	long long check = std::strtoll(this->getNumber(), NULL, 10);

	printable ? std::cout << "char: " << static_cast<char>(n) << std::endl : std::cout << "char: " << "Non displayable" << std::endl;

	check == n ? std::cout << "int: " << n << std::endl : std::cout << "int: " << "Overflow" << std::endl;

	flag ? std::cout << "float: " << static_cast<float>(n) << ".0f" << std::endl : std::cout << "float: " << static_cast<float>(n) << "f" << std::endl;
	flag ? std::cout << "double: " << static_cast<double>(n) << ".0" << std::endl : std::cout << "double: " << static_cast<double>(n) << std::endl;
}

void		Convert::print(float n)
{
	int 		flag = this->float_flag;
	int			printable = isprint(static_cast<char>(n));
	long long	check = std::strtoll(this->getNumber(), NULL, 10);

	printable ? std::cout << "char: " << static_cast<char>(n) << std::endl : std::cout << "char: " << "Non displayable" << std::endl;

	(static_cast<int>(n)) == check ? std::cout << "int: " << static_cast<int>(n) << std::endl : std::cout << "int: " << "Overflow" << std::endl;
	
	flag ? std::cout << "float: " << n << ".0f" << std::endl : std::cout << "float: " << n << "f" << std::endl;
	flag ? std::cout << "double: " << static_cast<double>(n) << ".0" << std::endl : std::cout << "double: " << static_cast<double>(n) << std::endl;

}

void		Convert::print(double n)
{
	int flag = this->float_flag;
	int printable = isprint(static_cast<char>(n));
	long long check = std::strtoll(this->getNumber(), NULL, 10);

	printable ? std::cout << "char: " << static_cast<char>(n) << std::endl : std::cout << "char: " << "Non displayable" << std::endl;

	(static_cast<int>(n)) == check ? std::cout << "int: " << static_cast<int>(n) << std::endl : std::cout << "int: " << "Overflow" << std::endl;

	flag ? std::cout << "float: " << static_cast<float>(n) << ".0f" << std::endl : std::cout << "float: " << static_cast<float>(n) << "f" << std::endl;
	flag ? std::cout << "double: " << n << ".0" << std::endl : std::cout << "double: " << n << std::endl;
}

void		Convert::print()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: nanf" << std::endl;
	std::cout << "double: nan" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */