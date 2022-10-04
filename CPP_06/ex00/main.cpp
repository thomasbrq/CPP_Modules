#include "Convert.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Bad arguments! Please use ./convert <number>" << std::endl;
		return (0);
	}

	std::string	string_number(argv[1]);

	Convert	a(string_number);

	std::string	type = a.findType();
	const char	*	number = a.getNumber();

	if (type == "char")
	{
		char	char_n = number[0];
		a.print(char_n);
	}
	else if (type == "int")
	{
		int	int_n = std::atoi(number);
		a.print(int_n);
	}
	else if (type == "float")
	{
		float float_n = std::atof(number);
		a.print(float_n);
	}
	else if (type == "double")
	{
		double	double_n = static_cast<double>(std::atof(number));
		a.print(double_n);
	}
	else
		a.print();

	return (0);
}