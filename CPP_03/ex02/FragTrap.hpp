#ifndef FragTrap_HPP
#define FragTrap_HPP

#include <iostream>

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

public:
    FragTrap(std::string name);
	FragTrap(const FragTrap &f);
	FragTrap&operator=(const FragTrap &f);
    ~FragTrap(void);

	void	attack(const std::string &target);
	void	highFivesGuys(void);

private:


};


#endif
