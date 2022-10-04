#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include <fstream>

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm( Form const & src );
		virtual ~ShrubberyCreationForm();

		virtual Form *			recreate(std::string target);

		virtual void	beExecuted() const;

	private:

};

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */