#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

# include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{

	public:

		Form();
		Form(std::string name, int sgrade, int egrade);
		Form( Form const & src );
		virtual ~Form();

		Form &		operator=( Form const & rhs );

		std::string		getName() const;
		bool			isSigned() const;
		int				getSignGradeRequired() const;
		int				getExecuteGradeRequired() const;

		void			beSigned(Bureaucrat & bureaucrat);
		virtual void	beExecuted() const = 0;
		void			execute(Bureaucrat const & executor) const;

		class GradeTooHighException : public std::exception {
			const char *what() const throw();
		};

		class GradeTooLowException : public std::exception {
			const char *what() const throw();
		};

		class FormNotSignedException : public std::exception {
			const char *what() const throw();
		};

	private:
		const std::string	_name;
		bool				_is_signed;
		const int			_sign_grade_required;
		const int			_execute_grade_required;
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */