#include <iostream>

#include "Serialisation.hpp"

int	main(void)
{
	Data myData;

	myData.data1 = 42;
	myData.data2 = 55;
	myData.data3 = 'a';

	std::cout << "data1: " << myData.data1 << std::endl;
	std::cout << "data2: " << myData.data2 << std::endl;
	std::cout << "data3: " << myData.data3 << std::endl;

	std::cout << std::endl;

	Serialisation	test;

	Data * myData2 = test.deserialize(test.serialize(&myData));

	std::cout << "data1: " << myData2->data1 << std::endl;
	std::cout << "data2: " << myData2->data2 << std::endl;
	std::cout << "data3: " << myData2->data3 << std::endl;
	return (0);
}