#include "MutantStack.hpp"

int	main(void)
{
	{
		std::cout << "Mutant stack: " << std::endl << std::endl;
		MutantStack< int >	stack;

		std::cout << "Stack push 10" << std::endl;
		stack.push(10);
		std::cout << "Stack push 7" << std::endl;
		stack.push(7);

		std::cout << "Stack top: " << stack.top() << std::endl;

		std::cout << "Stack pop" << std::endl;
		stack.pop();

		std::cout << "Stack size: " << stack.size() << std::endl;

		std::cout << "Stack push 3, 5, 737, 0" << std::endl;
		stack.push(3);
		stack.push(5);
		stack.push(737);
		stack.push(0);

		MutantStack<int>::iterator	it = stack.begin();
		MutantStack<int>::iterator	ite = stack.end();

		std::cout << std::endl;
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		std::stack<int>	s(stack);
		std::cout << std::endl;
	}
	std::cout << std::endl;
	{
		std::cout << "std::list" << std::endl << std::endl;
		std::list< int >	stack;

		std::cout << "List push 10" << std::endl;
		stack.push_back(10);
		std::cout << "List push 7" << std::endl;
		stack.push_back(7);

		std::cout << "List first: " << *stack.begin() << std::endl;

		std::cout << "List pop" << std::endl;
		stack.pop_back();

		std::cout << "List size: " << stack.size() << std::endl;

		std::cout << "List push 3, 5, 737, 0" << std::endl;
		stack.push_back(3);
		stack.push_back(5);
		stack.push_back(737);
		stack.push_back(0);

		std::list<int>::iterator	it = stack.begin();
		std::list<int>::iterator	ite = stack.end();

		std::cout << std::endl;
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::cout << std::endl;

	}

	return (0);
}