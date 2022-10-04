#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
{
	std::cout << "bureaucrat default creator" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	std::cout << "bureaucrat creator" << std::endl;
	
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();

	this->_grade = grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ) : _name(src._name), _grade(src._grade)
{
	std::cout << "bureaucrat copy creator" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
	std::cout << "bureaucrat destructor" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	this->_grade = rhs.getGrade();
	return (*this);
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void				Bureaucrat::incrementGrade()
{
	int	grade = (this->getGrade() - 1);

	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();

	this->_grade = grade;
	std::cout << "incrementing success" << std::endl;
}

void				Bureaucrat::decrementGrade()
{
	int	grade = (this->getGrade() + 1);

	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();

	this->_grade = grade;
	std::cout << "decrementing success" << std::endl;
}

void				Bureaucrat::signForm(Form & form)
{
	try
	{
		form.beSigned(*this);
	}
	catch (std::exception & e)
	{
		std::cout << this->getName() << " couldn't sign " << form.getName() << 
		" because " << e.what() << std::endl;
		return;
	}
	
	std::cout << this->getName() << " signed " << form.getName() << std::endl;
}

void				Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
	}
	catch (std::exception & e)
	{
		std::cout << this->getName() << " couldn't execute " << form.getName() << 
		" because " << e.what() << std::endl;
		return;
	}
}


const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string			Bureaucrat::getName() const
{
	return (this->_name);
}

int					Bureaucrat::getGrade() const
{
	return (this->_grade);
}

/* ************************************************************************** */