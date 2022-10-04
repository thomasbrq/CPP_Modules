/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbraquem <tbraquem@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:10:26 by tbraquem          #+#    #+#             */
/*   Updated: 2022/08/11 11:05:17 by tbraquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
    // Animal  test = new Animal();
    Animal  *array[10];
	
    for (size_t i = 0; i < 5; i++)
    {
        array[i] = new Dog();
        std::cout << std::endl;
        array[i]->makeSound();
        std::cout << std::endl;
    }
	
    std::cout << std::endl;
	
    for (size_t i = 5; i < 10; i++)
    {
        array[i] = new Cat();
        std::cout << std::endl;
        array[i]->makeSound();
        std::cout << std::endl;
    }
	
    for (size_t i = 0; i < 10; i++)
        delete array[i];
    return (0);
}
