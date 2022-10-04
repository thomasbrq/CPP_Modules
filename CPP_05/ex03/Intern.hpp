#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>

# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{

	public:

		Intern();
		Intern( Intern const & src );
		~Intern();

		Intern &		operator=( Intern const & rhs );
		Form *			makeForm(std::string form_name, std::string target);

		class FormDoesntExistException : public std::exception {
			const char *what() const throw();
		};

	private:
		Form	*forms[3];

};

std::ostream &			operator<<( std::ostream & o, Intern const & i );

#endif /* ********************************************************** INTERN_H */