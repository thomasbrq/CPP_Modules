/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:10:26 by tbraquem          #+#    #+#             */
/*   Updated: 2022/08/08 13:21:43 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongDog.hpp"
#include "WrongCat.hpp"

int main(void)
{
    // Animal, Dog, Cat
    {
        std::cout << "Right way" << std::endl << std::endl;
        const Animal *meta = new Animal();
        const Animal *j = new Dog();
        const Animal *i = new Cat();

        std::cout << std::endl;
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;

        j->makeSound();
        i->makeSound();
        meta->makeSound();
        std::cout << std::endl;

        delete meta;
        delete j;
        delete i;

        std::cout << std::endl;
    }

    // WrongAnimal, WrongDog, WrongCat
    {
        std::cout << "Wrong way" << std::endl << std::endl;
        const WrongAnimal *meta = new WrongAnimal();
        const WrongAnimal *j = new WrongDog();
        const WrongAnimal *i = new WrongCat();

        std::cout << std::endl;
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;

        j->makeSound();
        i->makeSound();
        meta->makeSound();
        std::cout << std::endl;

        delete meta;
        delete j;
        delete i;
        std::cout << std::endl;
    }

    return (0);
}