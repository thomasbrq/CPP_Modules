#ifndef WrongAnimal_HPP
#define WrongAnimal_HPP

#include <iostream>

class WrongAnimal
{

public:
    WrongAnimal(void);
	WrongAnimal(const WrongAnimal &f);
	WrongAnimal&operator=(const WrongAnimal &f);
    ~WrongAnimal(void);

	void		makeSound(void) const;
    std::string getType(void) const;

private:

protected:
    std::string type;

};


#endif
