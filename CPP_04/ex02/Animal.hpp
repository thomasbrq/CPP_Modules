#ifndef Animal_HPP
#define Animal_HPP

#include <iostream>

class Animal
{

public:
    Animal(void);
	Animal(const Animal &f);
	Animal&operator=(const Animal &f);
    virtual ~Animal(void);

	virtual void		makeSound(void) const = 0;
    std::string getType(void) const;

private:

protected:
    std::string type;

};


#endif
