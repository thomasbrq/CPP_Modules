#include "FragTrap.hpp"

//  _____                _                   _
// / ____|              | |                 | |
// | |     ___  _ __  ___| |_ _ __ _   _  ___| |_ ___  _ __ ___
// | |    / _ \| '_ \/ __| __| '__| | | |/ __| __/ _ \| '__/ __|
// | |___| (_) | | | \__ \ |_| |  | |_| | (__| || (_) | |  \__ \
// \______\___/|_| |_|___/\__|_|   \__,_|\___|\__\___/|_|  |___/

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor called!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &f) : ClapTrap(f)
{
	*this = f;
}

//  _ ___                       _
// /  __ \                     | |
// | |  | |_ __   ___ _ __ __ _| |_ ___  _ __ ___
// | |  | | '_ \ / _ \ '__/ _` | __/ _ \| '__/ __|
// | |__| | |_) |  __/ | | (_| | || (_) | |  \__ \
// \_____/| .__/ \___|_|  \__,_|\__\___/|_|  |___/
// 	 | |
// 	 |_|


FragTrap &FragTrap::operator=(const FragTrap &f)
{
	(void) f;
	return (*this);
}

//  _____            _                   _
// |  __ \          | |                 | |
// | |  | | ___  ___| |_ _ __ _   _  ___| |_ ___  _ __ ___
// | |  | |/ _ \/ __| __| '__| | | |/ __| __/ _ \| '__/ __|
// | |__| |  __/\__ \ |_| |  | |_| | (__| || (_) | |  \__ \
// |_____/ \___||___/\__|_|   \__,_|\___|\__\___/|_|  |___/

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called!" << std::endl;
}

//  ______                _   _
// |  ____|              | | (_)
// | |__ _   _ _ __   ___| |_ _  ___  _ __  ___
// |  __| | | | '_ \ / __| __| |/ _ \| '_ \/ __|
// | |  | |_| | | | | (__| |_| | (_) | | | \__ \
// |_|   \__,_|_| |_|\___|\__|_|\___/|_| |_|___/

void	FragTrap::attack(const std::string &target)
{
	std::cout << "FragTrap: " << this->_name << " attacks " << target << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "High Fives!" << std::endl;
}
