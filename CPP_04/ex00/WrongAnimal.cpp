#include "WrongAnimal.hpp"

//  _____                _                   _
// / ____|              | |                 | |
// | |     ___  _ __  ___| |_ _ __ _   _  ___| |_ ___  _ __ ___
// | |    / _ \| '_ \/ __| __| '__| | | |/ __| __/ _ \| '__/ __|
// | |___| (_) | | | \__ \ |_| |  | |_| | (__| || (_) | |  \__ \
// \______\___/|_| |_|___/\__|_|   \__,_|\___|\__\___/|_|  |___/

WrongAnimal::WrongAnimal(void) : type("default")
{
	std::cout << "WrongAnimal constructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &f)
{
	(void) f;
}

//  _ ___                       _
// /  __ \                     | |
// | |  | |_ __   ___ _ __ __ _| |_ ___  _ __ ___
// | |  | | '_ \ / _ \ '__/ _` | __/ _ \| '__/ __|
// | |__| | |_) |  __/ | | (_| | || (_) | |  \__ \
// \_____/| .__/ \___|_|  \__,_|\__\___/|_|  |___/
// 	 | |
// 	 |_|


WrongAnimal &WrongAnimal::operator=(const WrongAnimal &f)
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

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called!" << std::endl;
}

//  ______                _   _
// |  ____|              | | (_)
// | |__ _   _ _ __   ___| |_ _  ___  _ __  ___
// |  __| | | | '_ \ / __| __| |/ _ \| '_ \/ __|
// | |  | |_| | | | | (__| |_| | (_) | | | \__ \
// |_|   \__,_|_| |_|\___|\__|_|\___/|_| |_|___/

void		WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal sound..." << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}
