#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include <fstream>
# include <cstdlib>

#include "Form.hpp"

class RobotomyRequestForm : public Form
{

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm( Form const & src );
		virtual ~RobotomyRequestForm();

		virtual void	beExecuted() const;

	private:

};

#endif /* ******************************************* ROBOTOMYREQUESTFORM_HPP */