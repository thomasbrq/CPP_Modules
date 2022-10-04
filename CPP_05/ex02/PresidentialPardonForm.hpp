#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include <fstream>
# include <cstdlib>

#include "Form.hpp"

class PresidentialPardonForm : public Form
{

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm( Form const & src );
		virtual ~PresidentialPardonForm();

		virtual void	beExecuted() const;

	private:

};

#endif /* ******************************************* PRESIDENTIALPARDONFORM_HPP */