#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form() : _name("default"), _is_signed(false), _sign_grade_required(150), _execute_grade_required(150)
{
	std::cout << "default form created" << std::endl;
}

Form::Form(std::string name, int sgrade, int egrade) : _name(name), _is_signed(false), _sign_grade_required(sgrade), _execute_grade_required(egrade)
{
	std::cout << "form created" << std::endl;
}

Form::Form( const Form & src ) : _name(src._name), _is_signed(src._is_signed), _sign_grade_required(src._sign_grade_required), _execute_grade_required(src._execute_grade_required)
{
	std::cout << "Form instance created by copy!" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
	std::cout << "form destructor" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	this->_is_signed = rhs.isSigned();
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << "Form name: " << i.getName() << ", is signed: " << i.isSigned() <<
	", sign grade required: " << i.getSignGradeRequired() << ", execute grade required: " <<
	i.getExecuteGradeRequired();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void			Form::beSigned(Bureaucrat & bureaucrat)
{
	int grade = bureaucrat.getGrade();
	int	required_grade = this->getSignGradeRequired();

	if (grade > required_grade)
		throw GradeTooLowException();

	this->_is_signed = true;
}

void			Form::execute(Bureaucrat const & executor) const
{
	int grade = executor.getGrade();
	int	required_grade = this->getExecuteGradeRequired();
	int	is_signed = this->isSigned();

	if (grade > required_grade)
		throw GradeTooLowException();

	if (is_signed == false)
		throw FormNotSignedException();

	std::cout << "Form can be executed" << std::endl;
	this->beExecuted();
}


const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}

const char *Form::FormNotSignedException::what() const throw()
{
	return ("Form not signed!");
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string		Form::getName() const
{
	return (this->_name);
}

bool			Form::isSigned() const
{
	return (this->_is_signed);
}

int				Form::getSignGradeRequired() const
{
	return (this->_sign_grade_required);
}

int				Form::getExecuteGradeRequired() const
{
	return (this->_execute_grade_required);
}


/* ************************************************************************** */